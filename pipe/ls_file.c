#include"headers.h"
main(int argc,char **argv)
{
	if(argc!=2)
	{
		printf(" ls \n");
			return;
	}
	int fd;
	int p[2];
	pipe(p);
	char str[100];
	if(fork())
	{
		printf("parent id=%d PPID=%d\n",getpid(),getppid());
		close(1);//std output closed
		dup(p[1]);//now p[1] in place of stdout,write to stdoutput
			execlp(argv[1],argv[1],NULL);
		wait(0);
			printf("main exit....\n");//never execute coz excelp replace the all code
	}
	else
	{
		printf("child=%d PID=%d\n",getpid(),getppid());
		fd=open("txt",O_CREAT|O_WRONLY,0660);
		if(fd==-1)
			perror("open");
		close(0);//std input closed
			dup(p[0]);//now p[0]is in std input now it read from std input
		while(scanf(" %s ",str))//im reading from pipe
		{
			printf("%s \n",str);
			strcat(str,"\n");// for new line
			write(fd,str,strlen(str));
		}//writing to the file
	}
}
