#include<stdio.h>
#include<unistd.h>
main()
{
	int v;
	if(fork())
	{
		printf("parent%d %d\n",getpid(), getppid());
		if(fork())
		{
			printf("%d   %d\n",getpid(),getppid());
		}
		else
		{
			printf("%d %d\n",getpid(),getppid());
		}
	}
	else
	{
		printf("child1 %d %d\n",getpid(),getppid());
	}
}
