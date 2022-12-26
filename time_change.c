#include"headers.h"
main(int argc,char** argv)
{
	struct utimbuf v;
	if(argc!=2)
	{
		printf("invalid format use <fil>\n");
		return;//return for function control
	}
	v.actime=v.modtime=time(0);
	if(utime(argv[1],&v)==-1)
	{
		perror("utime");exit(0);//exit zero for process control
	}
printf("update\n");
}
