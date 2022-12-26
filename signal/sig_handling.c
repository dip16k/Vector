#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<sys/wait.h>
#include<signal.h>
void sig_handler(int n)
{
	printf("signal received %d\n",n);
}
main()
{
	int v;
	signal(SIGINT,sig_handler);
	if(fork())
	{
		printf("parent id=%d  PPID=%d\n",getpid(),getppid());
		wait(NULL);
			while(1)
			{
				printf("hi....\n");
				sleep(1);
			}
	}
	else
	{
		printf("child id=%d PPID=%d\n",getpid(),getppid());
			sleep(5);
		printf("exiting...\n");
	}
}
