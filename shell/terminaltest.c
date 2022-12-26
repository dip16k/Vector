#include"headers.h"
main()
{
	int id;
	int p[2];
	pipe(p);
	printf("parentid =%d\n",getpid());
		if(fork()==0)
		{
			printf("pid=%d  PPID=%d\n",getpid(),getppid());
			int fd;
			char str[500];
			/*fd=open("test",O_WRONLY|O_CREAT,0666);
			gets(str);
			write(fd,str,500);*/
			while(1)
			{
			printf("good morning\n");
				sleep(4);
				system("clear");
			}
		}
wait(0);
}
