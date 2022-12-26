#include"headers.h"
main(int argc ,char **argv)
{
	DIR *dp;
	struct dirent *ptr;
	if(argc>1)
		dp=opendir(argv[1]);
	else
		dp=opendir("./");//else open current directory
	while(ptr=readdir(dp))
	{
		printf("%d %s\n ",ptr->d_ino,ptr->d_name);
	}
closedir(dp);
}
