#include<stdio.h>
#include<stdlib.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<time.h>
main(int argc,char **argv)
{
	struct stat v1,v2;
	if(argc!=3)
	{
		printf("invalid format < file1>  <file2>\n");
		return;
	}
	if((lstat(argv[1],&v1))==-1)
	{
		perror("lstat");exit(0);
	}
	if((lstat(argv[2],&v2))==-1)
	{
		perror("lstat");exit(0);
	}
		printf("file1 inode=%u\n",(unsigned int)v1.st_ino);
		printf("file2 inode=%u\n",(unsigned int)v2.st_ino);
}
