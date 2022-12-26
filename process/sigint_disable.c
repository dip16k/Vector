#include"headers.h"
int count=0;
void pro(int n)
{
	count++;
	printf("signal received=%d  count=%d\n",n,count);
	if(count>5)
		signal(SIGINT,SIG_DFL);
		
}
main()
{
		signal(SIGINT,pro);
	printf("process id=%d\tparent id=%d\n",getpid(),getppid());
	while(1);
}
	
