#include"headers.h"
main(int argc,char **argv)
{
	struct stat v;
	if(argc!=2)
	{
		printf("invalid option use <file>\n");
			return;
	}
	if((stat(argv[1],&v))==-1)
	{
		perror("stat");exit(0);
	}
	((v.st_mode)&(1<<14))?printf("it is a directory file\n"):printf("regular file\n");
}//main
