#include"headers.h"
main()
{
	int fd,st;
	char str[100];
	while(1)
	{
		printf("writing....\n");
		fd=open("fifo",O_WRONLY);
		gets(str);
		st=write(fd,str,100);
		if(st==-1)
		{ printf(" writing fail..\n");return;}
		else if(st==0)
		{	printf("nothing is written..\n"); return;}
		else
			printf("file send....\n");
		close(fd);
		fd=open("fifo",O_RDONLY);
		st=read(fd,str,100);
		if(st==-1)
		{	printf("reading fail..\n");return;}
		else if(st==0)
		{	printf("no data to read..\n");return;}
		else
			printf("R: %s\n",str);
		close(fd);
			printf("done.....\n");
	}
}
