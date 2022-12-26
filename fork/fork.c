#include<stdio.h>
#include<unistd.h>
main(int argc,char **argv)
{
	if(argc!=3)
	{
		printf("error use <command1>  <command 2>\n");
			return;
	}
	if(fork())
	{
		printf("parent id=%d PPID=%d\n",getpid(),getppid());
		execlp(argv[1],argv[1],NULL);
		printf("parent done\n");//this printf never be exicuted coz exe functon replcae the code with its code
	}
	else
	{
		printf("child id=%d PPID=%d\n",getpid(),getppid());
		execlp(argv[2],argv[2],NULL);
			printf("child done\n");
	
	}
printf("main\n");

}
