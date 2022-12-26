#include"headers.h"
main(int argc,char** argv)
{
	char ch;
	int fd;//file descriptor
	printf("process id:%d",getpid());
		printf("enter \n");
	getchar();
	fd=fopen("f1",O_RDONLY);
printf("fd=%d in process=%d\n",fd,getpid());
	while(read()

