#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
main(int argc,char **argv)
{
	char str[100];
//	while(1)
	{
//		puts(" type:");
//		scanf("%s",str);
		execlp(argv[1],argv[1],argv[2],argv[3],NULL);
	}
}
