#include<stdio.h>
#include<unistd.h>
main(int argc,char **argv)
{
	if(argc<2)
	{
		printf("use any app name\n");
		return;
	}
	execlp(argv[1],argv[1],NULL);
}
