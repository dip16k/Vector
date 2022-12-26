#include"headers.h"
void my(int n)
{
	static int t=10;// static variable cant be intialize with local variable compilation error
	printf(" signal received -> alrm time for next=%d\n",t);
	if(t==0)
		kill(getpid(),9);
	alarm(t);
		t=t-2;
}

main()
{
	int i=0;
	signal(SIGALRM,my);
	alarm(10);//timer start
	printf("PID=%d  PPID=%d\n",getpid(),getppid());
	while(1);
//printf("timmer start %d\n",i);
}
