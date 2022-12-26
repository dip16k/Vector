#include<stdio.h>
#include<unistd.h>
#include<string.h>
main(int a,char **argv,char **envp)
{
	int i=0;
	char *PATH="/bin/";
	//execl("/bin/ls","ls",0);
	while(envp[i])
	{
		printf("%s\n",envp[i]);
		i++;
	}
printf("done\n");
}
