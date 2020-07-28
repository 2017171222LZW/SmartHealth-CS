#include <stdio.h>
#include <sys/types.h>	       /* See NOTES */
#include <sys/socket.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <string.h>

int main(void)
{
	int fd;
	int ret;
	int client_fd;
	char buf[1024];
	char *mesage = "Hello World";
	struct sockaddr_in server_addr;

	fd = socket(AF_INET,SOCK_STREAM,0);
	if(fd < 0){
		perror("Fail to socket");
		return -1;
	}

	printf("fd = %d\n",fd);
	
	server_addr.sin_family = AF_INET;
	server_addr.sin_port   = htons(8888);
	server_addr.sin_addr.s_addr = inet_addr("192.168.75.131");
	ret = connect(fd,(const struct sockaddr *)&server_addr,sizeof(server_addr));
	if(ret < 0){
		perror("Fail to connect");
		return -1;
	}

	while(1){
		printf("Input : ");
		scanf("%s",buf);

		ret = send(fd,buf,strlen(buf) + 1,0);
		if(ret < 0){
			perror("Fail to send");
			return -1;
		}

		printf("Send %d bytes,message:%s\n",ret,buf);
	}

	return 0;
}
