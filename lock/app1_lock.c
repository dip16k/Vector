#include"headers.h"
main()
{
	struct flock v={F_WRLCK,0,0,0};
	int i=0,fd;
	char str[100]="ABCDEFGHIJKLMNOPQ";
	fd=open("f1",O_CREAT|O_WRONLY|O_APPEND,0660);
	if(fd==-1)	
	{printf("fail to open\n"); return;}
	fcntl(fd,F_SETLKW,&v);
	for(i=0;str[i];i++)
	{
		write(fd,str+i,1);
		printf("data: %s\n",str+i);
		sleep(1);
	}
close(fd);
}
		
	
