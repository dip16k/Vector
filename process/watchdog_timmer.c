#include"headers.h"
int v=0;
void my(int n)
{
	printf("interrupt received=%d\n",n);
	kill(v,9);
wait(0);
}
main()
{
	int t;
	v=fork();//fork return childs id;
	printf("v=%d\n",v);

	if(v)
	{	
		signal(SIGALRM,my);
		alarm(20);
		printf("parent id=%d  PPID=%d\n",getpid(),getppid());
			while(1);
	}
	else
	{
		printf("child=%d PPID=%d\n",getpid(),getppid());
			srand(getpid());
		//	t=rand()%10;
		//printf("delay=%d\n",t);
			while(1);
			

	}
printf("exit\n");
}
