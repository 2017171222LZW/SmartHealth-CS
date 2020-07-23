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

#define SUCCESS_STATE 0
#define FAILE_STATE  1

//void (*)(json_object *)  function pointer type
typedef void (*handler_client_t)(int sockfd,json_object *object);//handler_client_t function pointer type

handler_client_t client_request_handler[] = {
	handler_user_register,
	handler_user_login,
	handler_user_get_password,
	handler_user_change,
};

void parse_json_data(int client_fd,const char *json_string)
{
	int function_id;
	json_object *object;
	handler_client_t handler;
	json_object *function_id_object;

	object = json_tokener_parse(json_string);
	if(object == NULL){
		printf("The json data is error!\n");
		return;
	}

	function_id_object = json_object_object_get(object,"function_id");
	if(function_id_object == NULL){
		printf("The json object no such functionId filed!\n");
		goto error_1;
	}

	function_id = json_object_get_int(function_id_object);
	printf("T:function_id : %d\n",function_id);

	handler = client_request_handler[function_id];
	(*handler)(client_fd,object);

error_1:	

	json_object_put(object);
	return;
}

void *do_client(void *arg)
{	
	int ret;
	char buf[1024];
	int client_fd = *((int *)arg);

	while(1){
		printf("recv client_fd:%d ...\n",client_fd);
		ret = recv(client_fd,buf,sizeof(buf) - 1,0);
		if(ret <= 0){
			perror("Fail to recv");
			break;
		}else{
			buf[ret] = '\0';//buf[0] ... buf[1023]
			printf("recv %d bytes,message:%s\n",ret,buf);
			parse_json_data(client_fd,buf);
		}
	}

	close(client_fd);
}


int main(void)
{
	int fd;
	int ret;
	int client_fd;
	pthread_t tid;
	struct sockaddr_in server_addr;

	fd = socket(AF_INET,SOCK_STREAM,0);
	if(fd < 0){
		perror("Fail to socket");
		return -1;
	}

	printf("fd = %d\n",fd);
	
	server_addr.sin_family = AF_INET;
	server_addr.sin_port   = htons(8888);
	server_addr.sin_addr.s_addr = inet_addr("192.168.0.12");
	ret = bind(fd,(const struct sockaddr *)&server_addr,sizeof(server_addr));
	if(ret < 0){
		perror("Fail to bind");
		return -1;
	}

	ret = listen(fd,128);
	if(ret < 0){
		perror("Fail to listen");
		return -1;
	}

	printf("listen ....\n");

	while(1){

		client_fd = accept(fd,NULL,NULL);
		if(client_fd < 0){
			perror("Fail to accept");
			return -1;
		}

		printf("client_fd : %d\n",client_fd);
	
		pthread_create(&tid,NULL,do_client,&client_fd);
		pthread_detach(tid);
	}

	return 0;
}