#include"tcp_headers.h"
main(int argc,char** argv)
{
	if(argc<3)
	{	printf("use <server ip>   wellknownport\n"); return;}
	char buffer[1024];
	int nBytes;
	int sock_fd;
		/* creating a socket*/
		sock_fd=socket(AF_INET,SOCK_STREAM,0);
		if(sock_fd==-1)
			{perror("socket");return;}
		/* server info initialization*/
		struct sockaddr_in serverAddr;
			serverAddr.sin_family=AF_INET;
			serverAddr.sin_port=htons(atoi(argv[2]));
			serverAddr.sin_addr.s_addr=inet_addr(argv[1]);
		/* now connect to the server*/
		if(connect(sock_fd,(struct sockaddr*)&serverAddr,sizeof(serverAddr))<0)
			{perror("connect");return;}
		while(1)
		{
			puts("type msg..........\n");
			bzero(buffer,1024);/* clear buffer */
				gets(buffer);
				send(sock_fd,buffer,sizeof(buffer),0);
			/* receive from server*/
				nBytes=recv(sock_fd,buffer,sizeof(buffer),0);
				if(nBytes==-1)
					{perror("send");return;}
				printf("ser: %s\n",buffer);
		}
}//main
		
