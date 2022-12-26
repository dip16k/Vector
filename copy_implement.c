#include"headers.h"
main(int argc,char **argv)
{
	int i=0,fd;
	char ch,*p=NULL;
	if(argc!=3)
	{
		printf("invalid format use<file1>  <file2>\n");
			return;
	}
	fd=open(argv[1],O_RDONLY);
	while(read(fd,&ch,1)==1)
	{
		p=realloc(p,sizeof(char)*(i+1));
		p[i++]=ch;
	}
close(fd);
	printf("reading  done\n");
	fd=open(argv[2],O_WRONLY|O_CREAT,S_IRUSR|S_IWUSR|S_IRGRP);//O_WRONLY not create a new file
		if(fd==-1)
		{
			printf("fail to open\n");
			return;
		}
write(fd,p,strlen(p));//writing to the file
close(fd);
printf("writing done\n");
}//main
