#ifndef _HANDLER_CLIENT_HEAD_
#define _HANDLER_CLIENT_HEAD_

#define USER_REGISTER     0
#define USER_LOGIN        1
#define USER_GET_PASSWORD 2
#define USER_CHANGE 	  3

#include <json/json.h>

extern void handler_user_register(int client_fd,json_object *object);
extern void handler_user_login(int client_fd,json_object *object);
extern void handler_user_get_password(int client_fd,json_object *object);
extern void handler_user_change(int client_fd, json_object *object);

#endif
