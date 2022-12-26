#include"headers.h"
main()
{
	int fd,st;
	char str[100],str1[]="good morning";
	while(1)
	{
		printf("reading...\n");
		fd=open("fifo",O_RDONLY);
		st=read(fd,str,100);
		if(st==-1)
		{	printf("fail to read..\n");return;}
		if(st==0)
		{	printf("nothing to read...\n");return;}
		close(fd);
		printf("reply...\n");
		fd=open("fifo",O_WRONLY);
		st=write(fd,str1,100);
		if(st==-1)
		{	printf("failed to write...\n");return;}
		else if(st==0)
		{	printf("nodata to write...\n");return;}
		else
		printf("data send..\n");
		close(fd);
	}
}	
