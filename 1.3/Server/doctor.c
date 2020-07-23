#include <stdio.h>
#include <sys/types.h>	       /* See NOTES */
#include <sys/socket.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <pthread.h>
#include <json/json.h>
#include <string.h>
#include "doctor.h"

int doctor_login(json_object *object)
{
	int ok = 0;
	const char *username = NULL;
	const char *password = NULL;
	json_object *username_object;
	json_object *password_object;

	username_object = json_object_object_get(object,"username");
	if(username_object == NULL){
		printf("The json object no such username filed!\n");
		return -1;
	}

	username = json_object_get_string(username_object);
	printf("username : %s\n",username);

	password_object = json_object_object_get(object,"password");
	if(password_object  == NULL){
		printf("The json object no such password filed!\n");
		return -1;
	}

	password = json_object_get_string(password_object);
	printf("password : %s\n",password);


	ok = verify_username_password(username,password);
	
	return ok;
}


void  add_doctor_register_information(json_object *object,char *filed_name,char **address)
{
	const char *filed_value;
	json_object *filed_object;

	filed_object = json_object_object_get(object,filed_name);
	if(filed_object == NULL){
		printf("The json object no such %s filed!\n",filed_name);
		return;
	}
	filed_value = json_object_get_string(filed_object);

	*address = malloc(strlen(filed_value) + 1);
	if(*address == NULL){
		printf("Fail to malloc!\n");
		return;
	}
	strcpy(*address,filed_value);

	return;
}

void base64_to_picture(const char *base64_data,const char *filename)
{
	FILE *fp;
	char command[1024];

	fp = fopen(filename,"w");
	if(!fp){
		perror("Fail to fopen");
		return;
	}

	fputs(base64_data,fp);
	fclose(fp);
	
	snprintf(command,sizeof(command),"base64 -d %s > doctor_picture/%s.jpg",filename,filename);
	system(command);

	remove(filename);	

	return;
}

void  add_doctor_register_picture(json_object *object,char *filed_name,char *filename)
{
	const char *filed_value;
	json_object *filed_object;

	filed_object = json_object_object_get(object,filed_name);
	if(filed_object == NULL){
		printf("The json object no such %s filed!\n",filed_name);
		return;
	}
	filed_value = json_object_get_string(filed_object);
	
	base64_to_picture(filed_value,filename);

	return;
}

void free_doctor_register(doctor_register_t *doctor_register)
{
	if(doctor_register->username){
		free(doctor_register->username);
	}

	if(doctor_register->password){
		free(doctor_register->password);
	}

	if(doctor_register->telphone){
		free(doctor_register->telphone);
	}

	if(doctor_register->name){
		free(doctor_register->name);
	}

	if(doctor_register->id){
		free(doctor_register->id);
	}

	if(doctor_register->work_time){
		free(doctor_register->work_time);
	}

	if(doctor_register->major){
		free(doctor_register->major);
	}

	if(doctor_register->education){
		free(doctor_register->education);
	}

	if(doctor_register->brief_introduce){
		free(doctor_register->brief_introduce);
	}

	return;
}

int doctor_register(json_object *object)
{
	int ret;
	int ok = 0;
	doctor_register_t doctor_register = {0};

	add_doctor_register_information(object,"username",&(doctor_register.username));
	add_doctor_register_information(object,"password",&(doctor_register.password));
	add_doctor_register_information(object,"telphone",&(doctor_register.telphone));
	add_doctor_register_information(object,"name",&(doctor_register.name));
	add_doctor_register_information(object,"id",&(doctor_register.id));
	add_doctor_register_information(object,"workTime",&(doctor_register.work_time));
	add_doctor_register_information(object,"major",&(doctor_register.major));
	add_doctor_register_information(object,"education",&(doctor_register.education));
	add_doctor_register_information(object,"briefIntroduce",&(doctor_register.brief_introduce));
	ok = verify_doctor_register(&doctor_register);
	if(ok == 0){
		add_doctor_register_picture(object,"picture",doctor_register.id);
	}
	free_doctor_register(&doctor_register);
	
	return ok;
}


int doctor_get_password(json_object *object,char **password)
{	
	int ok = 0;
	const char *telphone = NULL;
	const char *doctorid   = NULL;
	json_object *telphone_object;
	json_object *doctorid_object;

	telphone_object = json_object_object_get(object,"telphone");
	if(telphone_object == NULL){
		printf("The json object no such telphone filed!\n");
		return -1;
	}

	telphone = json_object_get_string(telphone_object);

	doctorid_object = json_object_object_get(object,"id");
	if(doctorid_object  == NULL){
		printf("The json object no such doctorid filed!\n");
		return -1;
	}

	doctorid = json_object_get_string(doctorid_object);

	ok = verify_telphone_doctorid(telphone,doctorid,password);
	
	return ok;
}
