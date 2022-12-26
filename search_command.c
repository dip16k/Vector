#include"headers.h"
main(int argc,char **argv)
{
	DIR *dp;
	struct dirent *ptr;
	char str[20];
	if(argc>1)
		dp=opendir(argv[1]);
	else
		dp=opendir("./");
	printf("enter file to search\n");
		gets(str);
	while(ptr=readdir(dp))
	{
		if(strcmp((ptr->d_name),str)==0)
		{
			printf("%s\n",ptr->d_name);
			printf(" found\n");
				break;
		}
	}
printf("end\n");
closedir(dp);
}
	
		
