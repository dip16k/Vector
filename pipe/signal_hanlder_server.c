// server
#include"headers.h"
void handler(int n)
{
	printf("signal received=%d\n",n);
}
main()
{
	struct sigaction v;
	v.sa_handler=handler;
	v.sa_flags=0;
	sigemptyset(&v.sa_mask);
	int fd,st;
	char str[100];
	sigaction(SIGPIPE,&v,0);
//signal(SIGPIPE,handler);
	while(1)
	{   
		fd=open("lan",O_RDONLY);
		st=read(fd,str,100);
	/*	if(st==0)
		{	printf("nothing to read..\n");return;}
		else */if(st==-1)
		{	printf("reading fail...\n");return;}
		else
			printf("data read: %s\n",str);
		close(fd);
		fd=open("lan",O_WRONLY);
		gets(str);
		st=write(fd,str,100);
			if(st==-1)
			{	printf("writing fail.....\n"); return;}
			//else if(st==0)
			//{	printf("nothing to read.......\n");return;}
			else
				printf("data send.......\n");
		close(fd);
printf("..........\n");
	}//while
}//main
