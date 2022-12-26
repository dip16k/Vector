#include"tcp_headers.h"
/* tcp_server*/
main(int argc,char **argv)
{
	if(argc<2)
	{	puts(" use well known port\n"); return;}
	int serverfd;
		serverfd=socket(AF_INET,SOCK_STREAM,0);
		if(serverfd==-1)
			{perror("socket");return;} 
	struct sockaddr_in server;
		server.sin_family=AF_INET;
		server.sin_port=htons(atoi(argv[1]));
		server.sin_addr.s_addr=inet_addr("0.0.0.0");
	if(bind(serverfd,(struct sockaddr*)&server,sizeof(server))<0)
		{perror("bind\n");return;}
	puts("binding done\n");
	if(listen(serverfd,5)<0) 
		{perror("listen\n");return;}
	/* queue for client*/
	struct sockaddr_in client;
	int clientfd;
	int size=sizeof(client);
	int job_id,i=0,j=0;
	int count=0,fd=0;
	int nbytes;
	char online[5][20],rdbuf[20];
	while(1)
	{
		puts(" wainting for connection request\n");
		clientfd=accept(serverfd,(struct sockaddr*)&client,&size);
		if(clientfd==-1)
			{perror("accept\n");return;}
		for(i=0;i<count;i++)
		{
			
			job_id=fork();
		if(job_id==0)
		{
			if(fork()==0)
			{//child
			 //
			}
			else
			{
				//
			}
		}//parent
	}//while
}//main                                                                                                                                      
