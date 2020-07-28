#ifndef _HANDLER_CLIENT_HEAD_
#define _HANDLER_CLIENT_HEAD_

#define USER_REGISTER    			0
#define USER_LOGIN       			1
#define USER_GET_PASSWORD 		2
#define USER_CHANGE 	  		3
#define DOCTOR_REGISTER   			4
#define DOCTOR_INFORMATION_GET 		5
#define DOCTOR_ID_INFORMATION_GET 	6
#define DOCTOR_USER_APPOINTMENT 		7
#define USER_FEATURE_DATA     		8

#include <json/json.h>

extern void handler_user_register(int client_fd,json_object *object);
extern void handler_user_login(int client_fd,json_object *object);
extern void handler_user_get_password(int client_fd,json_object *object);
extern void handler_user_change(int client_fd, json_object *object);
extern void handler_doctor_register(int client_fd, json_object *object);
extern void handler_doctor_information_get(int client_fd, json_object *object);
extern void handler_doctor_id_information_get(int client_fd,json_object *object);
extern void handler_user_doctor_appointment(int client_fd,json_object *object);
extern void handler_user_feature_data(int client_fd,json_object *object);

#endif
