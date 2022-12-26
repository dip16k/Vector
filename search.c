#include"headers.h"
main(int argc,char **argv)
{
	DIR *dp;//directory pointer
	struct dirent *ptr;
	if(argc>1)
		dp=opendir(argv[1]);
	else
		dp=opendir("./");
	while(ptr=readdir(dp))
	{
		printf("%d %s\n",ptr->d_ino,ptr->d_name);
	}
close(dp);
}//main
