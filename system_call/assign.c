#include<stdio.h>
#include<unistd.h>
main(int a,char **argv,char **envp)
{
	int i=1;
	char *path="/bin/ls";
	while(a)
	{
		execlp(argv[i],argv[i]);
		i++;
		a--;	
	}
printf("done\n");
}
