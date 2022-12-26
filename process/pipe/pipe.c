#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>

main(int argc,char **argv)
{
	if(argc<2)
	{
		printf("use proper command nm a.out grep pattern\n");
			return;
	}
	int p[2];
	pipe(p);
	if(fork())
	{
		close(1);
		dup(p[1]);
		execlp(argv[1],argv[1],argv[2],NULL);
	}
	else
	{
		close(0);
		dup(p[0]);
		execlp(argv[3],argv[3],argv[4],NULL);
	}

}
