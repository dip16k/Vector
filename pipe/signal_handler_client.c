#include"headers.h"
main()
{
	int fd,st;
	char str[100];
	while(1)
	{
		printf("writing.......\n");
		gets(str);
		fd=open("lan",O_WRONLY);
		st=write(fd,str,100);
		if(st==-1)
		{	printf("writing fail......\n");return;}
		else if(st==0)
		{	printf("nothing to write....\n");return;}
		else
			printf("data send...........\n");
		close(fd);
		fd=open("lan",O_RDONLY);
		st=read(fd,str,100);
		if(st==-1)
		{	printf("fail to read..\n");return;}
		else 
			printf("server rply: %s\n",str);
		close(fd);
	}
}

			
