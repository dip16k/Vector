#include"tcp_headers.h"
main(int argc, char **argv)
{
	if(argc<2)
		{printf("use well known port\n"); return;}
	int udp_socket;
	char buffer[1024];
		udp_socket=socket(AF_INET,SOCK_DGRAM,0);
		if(udp_socket==-1)
		{perror("socket");return;}
	struct sockaddr_in server;
	struct sockaddr_storage client;
	unsigned int size;
			size=sizeof(client);
		server.sin_family=AF_INET;
		server.sin_port=htons(atoi(argv[1]));
		server.sin_addr.s_addr=inet_addr("0.0.0.0");
	if(bind(udp_socket,(struct sockaddr*)&server,sizeof(server))<0)
		{perror("bind"); return;}
	puts("binding done\n");
	while(1)
	{
		printf(" waiting for client \n");
		bzero(buffer,1024);
		if(recvfrom(udp_socket,buffer,1024,0,(struct sockaddr*)&client,&size)<0)
			{perror("recvfrom");}
		printf("client send:%s\n",buffer);
		sendto(udp_socket,buffer,1024,0,(struct sockaddr*)&client,size);
	}
}//main
