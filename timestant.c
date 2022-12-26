#include"headers.h"
main(int argc ,char **argv)
{
	struct stat t1,t2;
	struct utimbuf v1,v2;
	v1.actime=v1.modtime=time(0);// curretn time
	v2.actime=v2.modtime=time(0);
	if(argc!=3)
	{
		printf("invalid format use <file1> <file2>\n");
		return;
	}
	if(stat(argv[1],&t1)==-1)
	{
		perror("stat");exit(0);
	}
	if(stat(argv[2],&t2)==-1)
	{
		perror("stat");exit(0);
	}
	if(t1.st_atime<t2.st_atime)
	{
		v2.actime=v2.modtime=t1.st_atime;
		printf("v2 modify argv[2]\n");
	  		if(utime(argv[1],&v1)==-1)
			perror("utime");
			
	}
	else
	{
		v1.actime=v1.modtime=t2.st_atime;
			if(utime(argv[2],&v2)==-1)
			perror("utime");
		printf("v1 modify argv[1]\n");
	}
		
printf("done\n");
}//main
