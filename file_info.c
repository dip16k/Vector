#include"headers.h"
main(int argc,char **argv)
{
	struct stat v;
	if(argc!=2)
	{
		printf("invalid format use < file>\n");
			return;
	}
	if(stat(argv[1],&v))
	{
		perror("stat");
		exit(0);//end process
	}
	((v.st_mode)&(1<<0))?printf("x"):printf("-");
	((v.st_mode)&(1<<1))?printf("w"):printf("-");
	((v.st_mode)&(1<<2))?printf("r"):printf("-");
	((v.st_mode)&(1<<3))?printf("x"):printf("-");
	((v.st_mode)&(1<<4))?printf("w"):printf("-");
	((v.st_mode)&(1<<5))?printf("r"):printf("-");
	((v.st_mode)&(1<<6))?printf("x"):printf("-");
	((v.st_mode)&(1<<7))?printf("w"):printf("-");
	((v.st_mode)&(1<<8))?printf("r"):printf("-");
	printf("%d ",((v.st_mode)&(1<<9)));
	printf("%d ",((v.st_mode)&(1<<10)));
	printf("%d ",((v.st_mode)&(1<<11)));
	printf("%d ",((v.st_mode)&(1<<12)));
	printf("%d ",((v.st_mode)&(1<<13)));
	printf("*%d ",((v.st_mode)&(1<<14)));
	printf("%d ",((v.st_mode)&(1<<15)));
	printf("%d ",((v.st_mode)&(1<<16)));
	printf("%d ",((v.st_mode)&(1<<17)));
}//main
