#include"headers.h"
main()
{
	int i,fd,a[3],nm=0,sp=0,ch=0;
	char data[100];
	
	while(1)
	{
		fd=open("lan",O_RDONLY);
		printf("reading.....\n");
		while(read(fd,data,100)==1)
		if(strcmp(data,"exit")==0)
			break;
		close(fd);
		if(strcmp(data,"exit")==0)
			break;
		for(i=0;data[i];i++)
		{
			if((data[i]>= 'a' && data[i]<='z')||(data[i]>='A' && data[i]<='Z'))
				ch++;
			else if(data[i]>='0' && data[i]<='9')
				nm++;
			else
				sp++;
		}
		fd=open("lan",O_WRONLY);
			a[0]=ch;a[1]=nm;a[2]=sp;
		write(fd,a,12);
		printf("reply..send..\n");
		close(fd);
			ch=nm=sp=0;
	}
}
