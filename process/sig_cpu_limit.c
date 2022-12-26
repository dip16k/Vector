#include"headers.h"
void pro(int n)
{
	printf("interupt number=%d\n",n);
}
main()
{
	struct rlimit v;
	signal(SIGXCPU,pro);
		getrlimit(RLIMIT_CPU,&v);
	printf("process id=%d  PPID=%d\n",getpid(),getppid());
	v.rlim_cur=5;
	v.rlim_max=10;
		setrlimit(RLIMIT_CPU,&v);
	//signal(SIGINT,SIGXCPU);
	while(1);
}
