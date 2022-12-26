#include"tcp_headers.h"
main(int argc,char *argv[])
{
	if(argc<2)
	{	printf("use <well known port>\n"); return;}
	int serverSocket;
	int nBytes;
	char buffer[1024];
	serverSocket=socket(AF_INET,SOCK_STREAM,0);
	if(serverSocket==-1)
		{perror("socket");return;}
/* socket prepare now structure initialization*/
	struct sockaddr_in serverAddr;
		serverAddr.sin_family=AF_INET;
		serverAddr.sin_port=htons(atoi(argv[1]));
		serverAddr.sin_addr.s_addr=inet_addr("0.0.0.0");
	if(bind(serverSocket,(struct sockaddr*)&serverAddr,sizeof(serverAddr))<0)
	{ 	perror("bind");return;}
/*binding done making queue*/
	if(listen(serverSocket,5)<0)
	{	perror("listen"); return;}
puts("waiting for connection request\n");
	while(1)
	{	/* witing for connection request  >>  structure for client */
		int clientSocket;
		struct sockaddr_in clientAddr;
		unsigned int clientLength;
				clientLength=sizeof(clientAddr);
		/* accept return new descriptor to client process*/
			clientSocket=accept(serverSocket,(struct sockaddr*)&clientAddr,&clientLength);
				if(clientSocket==-1)
					{perror("client socket");return;}
		/* client connected with server*/
		char *ip;
		int port;
			ip=inet_ntoa(clientAddr.sin_addr);
			port=ntohs(clientAddr.sin_port);
		printf("client ip=%s    client port=%d\n",ip,port);
		int job_id;
			job_id=fork();// child process created so server can handel multiple clients
			if(job_id==0)
			{
				while(1)
				{
					nBytes=recv(clientSocket,buffer,sizeof(buffer),0);
						if(nBytes==-1)
							{perror("recv");return;}
					printf("recv: %s\n",buffer);
					/* reply back to client*/
					send(clientSocket,buffer,nBytes,0);
				}	//while
			}//fork child process
	}//while
}//main
