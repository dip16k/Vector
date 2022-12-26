#include"headers.h"
main(int argc,char **argv)
{
	if(argc!=3)
	{
		printf(" source file  destination file\n");
			return;
	}
	int p[2],fd,fd1,n,st;
	char str[100];
	pipe(p);
	if(fork())
	{
		printf("parent=%d PPID=%d\n",getpid(),getppid());
		fd=open(argv[1],O_RDONLY);
		if(fd==-1)
			perror("open");
		n=lseek(fd,0,2);
		lseek(fd,0,0);
		printf("n=%d\n",n);
		st=read(fd,str,n);
		if(st==-1)
		{printf("reading failure..\n"); exit(0);}
		else if(st==0)
		{	printf("nothing to read....\n"); exit(0);}
		else
		 printf("%s\n",str);
		close(fd);
			write(p[1],&n,4);// sending number of bytes to be received by child
			write(p[1],str,n);// data sending
		wait(0);
			printf("exit..main\n");
	}
	else
	{
		printf("child=%d PPID=%d\n",getpid(),getppid());
		fd1=open(argv[2],O_CREAT|O_WRONLY,0660);
		if(fd1==-1)
			perror("open");
		read(p[0],&n,4);// number of byte it have to be received
printf("n=%d child\n",n);
		read(p[0],str,n);// data receiving
		st=write(fd1,str,n);
		if(st==-1)
		{printf("writing failure..\n"); exit(0);}
		else if(st==0)
		{	printf("nothing to write.....\n"); exit(0);}
		else
			printf("receive\n");
		close(fd1);
			printf("child exit\n");
		exit(0);
	}
}//main
