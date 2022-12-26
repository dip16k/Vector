#include"headers.h"
main()
{
	int fd,a[20];
	char str[100];
	while(1)
	{
		printf("writing...\n");
		fd=open("lan",O_WRONLY);
			gets(str);
		while(write(fd,str,100)==1)
			printf("sending\n");
		close(fd);
				if(strcmp(str,"exit")==0)
					break;
		
			fd=open("lan",O_RDONLY);
			read(fd,a,12);
		printf("data received...\n");
			printf(" ch=%d num= %d  sp=%d\n",a[0],a[1],a[2]);
		close(fd);
		
	}
}
		
