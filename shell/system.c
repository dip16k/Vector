#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
main(int argc,char **argv)
{	
	char str[100];
	while(1)
	{
		puts("type cmd: ");
		scanf("%s",str);
		system(str);
	}
}
