#include"headers.h"
search(char *dir,char *str)
{
	DIR *dp;
	struct dirent *ptr;
	struct stat v;
	dp=opendir(dir);
	while(ptr=readdir(dp))
	{
		printf("%s\n",(ptr->d_name));
		if(strcmp((ptr->d_name),str)==0)
		{//if file found than exit from the process
			printf(" file found=%s\n",ptr->d_name);
			printf("in directory=%s\n",dir);
			exit(0);// dont use return in this function it gives infinite loops 
		}
		if(stat(ptr->d_name,&v)==-1)
		{
			perror("stat");exit(0);//return back to process
		}
		if((v.st_mode)&(1<<14))
		{
			printf("new directory found\n");
			printf("%s\n",ptr->d_name);
			search((ptr->d_name),str);
		}
	}
	return;	
}
/////////////////// main
main(int argc,char **argv)
{
	char str[20];
	if(argc!=2)
	{
		printf("inavalid format use <./> directory\n");
			return;
	}
	printf("enter a file name to search\n");
		scanf("%s",str);
	search(argv[1],str);
printf("operation close\n");
}
	
		
