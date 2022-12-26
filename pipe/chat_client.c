// chat client
#include"headers.h"
int pid ,cid;
void handler(int n)
{
	printf("signal received %d\n",n);
	kill(cid,9);
	kill(pid,9);
}
main()
{
	int fd,fd2,st;
	char str[100],str2[100];
	signal(SIGPIPE,handler);
	pid=getpid();
	if(fork())
	{//parent
		printf("pid=%d  PPID=%d\n",pid,getppid());
		printf("enter message...\n");
		while(1)
		{
			fd=open("lan",O_WRONLY);
				gets(str);
			st=write(fd,str,100);
			if(st==-1)
			{perror("write");return;}
		//	else
		//	printf("file send...\n");
			close(fd);
		
		}
	}
	else
	{	cid=getpid();
		printf("child pid=%d\n",cid);
		while(1)
		{
			fd2=open("lan2",O_RDONLY);
			st=read(fd2,str2,100);
			if(st==-1)
			{perror("read");return;}
			else
				printf("server: %s\n",str2);
			close(fd2);
		}
	}
}
