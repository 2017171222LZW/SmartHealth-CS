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

void handler_user_change(int client_fd,json_object *object)
{
	int state = user_change(object);
	json_object *client_object = create_client_json_object(USER_CHANGE,state);
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
