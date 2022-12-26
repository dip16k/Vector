#include"headers.h"
main(int argc,char **argv)
{
	char ch;
	int fd;
	if(argc!=2)
	{
		printf("invalid format use <file name>\n");
			return;
	}
	fd=open(argv[1],O_RDONLY);
	if(fd==-1)	
	{
		perror("_");return;
	}
	while((read(fd,&ch,1))==1)
		printf("%c",ch);
printf("/\n");
close(fd);
}
