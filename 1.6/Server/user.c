#include <stdio.h>
#include <sys/types.h>	       /* See NOTES */
#include <sys/socket.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <pthread.h>
#include <json/json.h>
#include <string.h>
#include "user.h"

int user_login(json_object *object)
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


void  add_user_register_information(json_object *object,char *filed_name,char **address)
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

void  add_user_feature_data_information(json_object *object,char *filed_name,char **address)
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

void free_user_register(user_register_t *user_register)
{
	if(user_register->username){
		free(user_register->username);
	}

	if(user_register->password){
		free(user_register->password);
	}

	if(user_register->telphone){
		free(user_register->telphone);
	}

	if(user_register->name){
		free(user_register->name);
	}

	if(user_register->id){
		free(user_register->id);
	}

	return;
}

int user_register(json_object *object)
{
	int ret;
	int ok = 0;
	user_register_t user_register = {0};

	add_user_register_information(object,"username",&(user_register.username));
	add_user_register_information(object,"password",&(user_register.password));
	add_user_register_information(object,"telphone",&(user_register.telphone));
	add_user_register_information(object,"name",&(user_register.name));
	add_user_register_information(object,"id",&(user_register.id));

	ok = verify_user_register(&user_register);

	free_user_register(&user_register);

	return ok;
}


int user_get_password(json_object *object,char **password)
{	
	int ok = 0;
	const char *telphone = NULL;
	const char *userid   = NULL;
	json_object *telphone_object;
	json_object *userid_object;

	telphone_object = json_object_object_get(object,"telphone");
	if(telphone_object == NULL){
		printf("The json object no such telphone filed!\n");
		return -1;
	}

	telphone = json_object_get_string(telphone_object);

	userid_object = json_object_object_get(object,"id");
	if(userid_object  == NULL){
		printf("The json object no such userid filed!\n");
		return -1;
	}

	userid = json_object_get_string(userid_object);

	ok = verify_telphone_userid(telphone,userid,password);
	
	return ok;
}

void free_user_feature_data(user_feature_data_t *user_feature_data)
{
	if(user_feature_data->username){
		free(user_feature_data->username);
	}

	if(user_feature_data->blood_gluse){
		free(user_feature_data->blood_gluse);
	}

	if(user_feature_data->blood_oxygen){
		free(user_feature_data->blood_oxygen);
	}

	if(user_feature_data->blood_presure){
		free(user_feature_data->blood_presure);
	}

	if(user_feature_data->heart_rate){
		free(user_feature_data->heart_rate);
	}

	if(user_feature_data->temperature){
		free(user_feature_data->temperature);
	}

	if(user_feature_data->date){
		free(user_feature_data->date);
	}
}

int user_feature_data_store(json_object *object)
{
	int ret;
	int ok = 0;
	user_feature_data_t user_feature_data = {0};

	add_user_feature_data_information(object,"username",&(user_feature_data.username));
	add_user_feature_data_information(object,"blood_gluse",&(user_feature_data.blood_gluse));
	add_user_feature_data_information(object,"blood_oxygen",&(user_feature_data.blood_oxygen));
	add_user_feature_data_information(object,"blood_presure",&(user_feature_data.blood_presure));
	add_user_feature_data_information(object,"heart_rate",&(user_feature_data.heart_rate));
	add_user_feature_data_information(object,"temperature",&(user_feature_data.temperature));
	add_user_feature_data_information(object,"date",&(user_feature_data.date));

	ok = add_user_feature_data(&user_feature_data);

	free_user_feature_data(&user_feature_data);

	return ok;
}

int user_change(json_object *object){
	int ret;
	int ok=0;
	user_register_t user_register = {0};

	add_user_register_information(object, "password", &(user_register.password));
	add_user_register_information(object, "telphone", &(user_register.telphone));
	add_user_register_information(object, "id"  	, &(user_register.id));

	ok = change_password_userid(&user_register);

	free_user_register(&user_register);
	
	return ok;
}
