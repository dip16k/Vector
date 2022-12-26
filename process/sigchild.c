#include"headers.h"
void pro(int n)
{
	printf("interupt number=%d\n",n);
		
}
main()
{
	signal(SIGCHLD,pro);
	if(fork())
	{
		printf("id=%d PPID=%d\n",getpid(),getppid());
			printf("parent\n");
		while(1);
	}
	else
	{
		printf("ID=%d  PPID=%d\n",getpid(),getppid());
			printf("child\n");
	}
}
