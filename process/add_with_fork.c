#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/resource.h>
#include<stdlib.h>
main(int argc,char** argv)
{
	if(argc!=3)
	{
		printf(" value1 value2 \n");
			return;
	}
	int v;
	int result,num1,num2;
	if(fork())
	{
		printf("parent =%d %d\n",getpid(),getppid());
		printf("hi\n");
		wait(&v);
		v>>=8;
		printf("exit value=%d\n",v);
			
	}
	else
	{
		printf("child=%d %d\n",getpid(),getppid());
			num1=atoi(argv[1]);
			num2=atoi(argv[2]);
			result=num1+num2;
			exit(result);			
	}
}
