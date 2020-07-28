#include <stdio.h>
#include <string.h>
#include <sys/types.h>	       /* See NOTES */
#include <sys/socket.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <pthread.h>
#include <json/json.h>
#include "handler_client.h"
#include "doctor.h"

json_object *create_client_json_object(int function_id,int state)
{
	json_object *object;
	
	object = json_object_new_object();
	if(object == NULL){
		printf("Fail to json object new object!\n");
		return NULL;
	}

	json_object_object_add(object,"function_id",json_object_new_int(function_id));
	json_object_object_add(object,"state",json_object_new_int(state));

	return object;
}

void destory_client_json_object(json_object *client_object)
{
	json_object_put(client_object);
}

void reply_client_result(int client_fd,json_object *object)
{
	int ret;
	const char *json_string;
	
	json_string = json_object_to_json_string(object);
	if(json_string == NULL){
		printf("Fail to json_object_to_json_string!\n");
		return;
	}
	
	ret = send(client_fd,json_string,strlen(json_string),0);
	if(ret < 0){
		perror("Fail to send");
	}
	
	printf("reply client : %s\n",json_string);	

	return;
}


void handler_user_register(int client_fd,json_object *object)
{
	int state = user_register(object);
	json_object *client_object = create_client_json_object(USER_REGISTER,state);
	if(client_object){
		reply_client_result(client_fd,client_object);
		destory_client_json_object(client_object);
	}

	return;
}


void handler_user_login(int client_fd,json_object *object)
{
	int state = user_login(object);
	json_object *client_object = create_client_json_object(USER_LOGIN,state);
	if(client_object){
		reply_client_result(client_fd,client_object);
		destory_client_json_object(client_object);
	}

	return;
}


void handler_user_get_password(int client_fd,json_object *object)
{	
	char *password = "null";
	int state = user_get_password(object,&password);
	json_object *client_object = create_client_json_object(USER_GET_PASSWORD,state);

	if(client_object){
		json_object_object_add(client_object,"password",json_object_new_string(password));
		reply_client_result(client_fd,client_object);
		destory_client_json_object(client_object);
	}

	if(!state && password){
		free(password);
	}

	return;
}

void handler_user_change(int client_fd, json_object *object)
{
	int state = user_change(object);
	json_object *client_object = create_client_json_object(USER_CHANGE,state);
	if(client_object){
		reply_client_result(client_fd,client_object);
		destory_client_json_object(client_object);
	}
}

void handler_doctor_register(int client_fd,json_object *object)
{
	int state = doctor_register(object);
	json_object *client_object = create_client_json_object(DOCTOR_REGISTER,state);
	if(client_object){
		reply_client_result(client_fd,client_object);
		destory_client_json_object(client_object);
	}

	return;
}

void free_doctor_table(doctor_information_table_t *doctor_table)
{
	if(doctor_table->result){
		sqlite3_free_table(doctor_table->result);
	}

	return;
}

void add_doctor_infomation(json_object *object,doctor_information_table_t *doctor_table)
{
	int i;
	int j;
	int index = 0;
	json_object *doctor_array;

	doctor_array = json_object_new_array();
	if(!doctor_array){
		printf("Fail to json object new array!\n");
		return ;
	}
	/*
		for(i = 0, index = doctor_table->ncolumn;i < doctor_table->nrow;i ++){
			printf("%s\t",doctor_table->result[index ++]);
		}
	printf("\n");
	*/
	for(i = 0,index=doctor_table->ncolumn;i < doctor_table->nrow;i ++){
		json_object *object;
		object = json_object_new_object();

		for(j = 0;j < doctor_table->ncolumn;j ++){
			json_object_object_add(object,doctor_table->result[j],json_object_new_string(doctor_table->result[index ++]));
			//printf("%s\t",doctor_table->result[index ++]);
		}
		//printf("\n");
		json_object_array_add(doctor_array,object);
	}

	json_object_object_add(object,"doctor_info",doctor_array);

	return;
}

void handler_doctor_information_get(int client_fd,json_object *object)
{
	int state = 0;
	json_object *client_object;
	doctor_information_table_t doctor_table;
	extern doctor_information_table_t get_all_doctor_information(void);

	doctor_table = get_all_doctor_information();
	if(!doctor_table.nrow){
		state = 1;			
	}

	client_object = create_client_json_object(DOCTOR_INFORMATION_GET,state);
	if(client_object){
		if(doctor_table.nrow){
			add_doctor_infomation(client_object,&doctor_table);
		}
		reply_client_result(client_fd,client_object);
		destory_client_json_object(client_object);
	}

	free_doctor_table(&doctor_table);

	return;
}

add_doctor_picture_information(json_object *client_object, const char *id){
	FILE *fp;
	long size;
	char *buffer = NULL;
	char command[1024];

	sprintf(command,"base64 doctor_picture/%s.jpg > base64.txt", id);
	system(command);

	fp = fopen("base64.txt","r");
	if(NULL == fp){
		perror("Fail to open base64.txt");
		return ;
	}

	fseek(fp, 0, SEEK_END);
	size = ftell(fp);
	fseek(fp,0,SEEK_SET);

	buffer = (char *)malloc(size);
	fread(buffer,size,sizeof(char),fp);
	fclose(fp);

	remove("base64.txt");

	json_object_object_add(client_object, "picture", json_object_new_string(buffer));
	if(buffer){
		free(buffer);
	}
	return ;
}

void handler_doctor_id_information_get(int client_fd,json_object *object)
{
	int state = 0;
	json_object *id_object;
	json_object *client_object;
	const char *id = NULL;
	doctor_information_table_t doctor_table;
	extern doctor_information_table_t get_doctor_id_information(const char *id);

	id_object = json_object_object_get(object,"doctor_id");
	if(id_object == NULL){
		printf("The json object no such doctor_id filed!\n");
		return;
	}

	id = json_object_get_string(id_object);

	doctor_table = get_doctor_id_information(id);
	if(!doctor_table.nrow){
		state = 1;			
	}
	
	client_object = create_client_json_object(DOCTOR_ID_INFORMATION_GET,state);
	if(client_object){
		if(doctor_table.nrow){
			add_doctor_infomation(client_object,&doctor_table);
			add_doctor_picture_information(client_object,id); 
		}
		reply_client_result(client_fd,client_object);
		destory_client_json_object(client_object);
	}

	free_doctor_table(&doctor_table);

	return;
}

void handler_user_doctor_appointment(int client_fd,json_object *object)
{
	int n = 0;
	int state = user_doctor_appointment(object,&n);
	json_object *client_object = create_client_json_object(DOCTOR_USER_APPOINTMENT,state);
	if(client_object){
		json_object_object_add(client_object,"appointment_peoples",json_object_new_int(n));
		reply_client_result(client_fd,client_object);
		destory_client_json_object(client_object);
	}
}

void handler_user_feature_data(int client_fd,json_object *object)
{
	int state = user_feature_data_store(object);
	json_object *client_object = create_client_json_object(USER_FEATURE_DATA,state);
	if(client_object){
		reply_client_result(client_fd,client_object);
		destory_client_json_object(client_object);
	}

	return;
}



