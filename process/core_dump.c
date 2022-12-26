#include"headers.h"
main()
{
	printf("ID=%d   PPID=%d\n",getpid(),getppid());
	while(1)
	{
		printf("hi....\n");
		sleep(2);
	}
}
