#include"headers.h"
main()
{
	struct flock v={F_WRLCK,0,0,0};
	int fd,i=0;
	char str[100]="1234567890";
	fd=open("f1",O_CREAT|O_WRONLY|O_APPEND,0660);
	fcntl(fd,F_SETLKW,&v);
	if(fd==-1)
	{ perror("open"); return;}
	for(i=0;str[i];i++)
	{
		write(fd,str+i,1);
		printf("data write: %s\n",str+i);
		sleep(1);
	}
}
