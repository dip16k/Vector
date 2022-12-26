#include"tcp_headers.h"
main(int argc,char **argv)
{
	if(argc<2)
		{printf(" use ip and well known port");return;}
	int sock;
	char buffer[1024];
		sock=socket(AF_INET,SOCK_DGRAM,0);
		if(sock==-1)
			{perror("socket"); return;}
	struct sockaddr_in server;
		server.sin_family=AF_INET;
		server.sin_port=htons(atoi(argv[2]));
		server.sin_addr.s_addr=inet_addr(argv[1]);
	while(1)
	{	
		bzero(buffer,1024);
		puts("enter msg....\n");
		gets(buffer);
		sendto(sock,buffer,1024,0,(struct sockaddr*)&server,sizeof(server));
		bzero(buffer,1024);
		recvfrom(sock,buffer,1024,0,NULL,NULL);
		printf("recv from serv: %s\n",buffer);
	}
}//main
