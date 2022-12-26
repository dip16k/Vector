#include"headers.h"
main()
{
	int fd,p[2];
	char str[100];
	pipe(p);//pipe create
	if(fork())
	{
		printf("parent..%d PPID=%d\n",getpid(),getppid());
		close(0);//input close;
		dup(p[1]);
