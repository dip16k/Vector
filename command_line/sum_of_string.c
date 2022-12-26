#include<stdio.h>
#include<string.h>
main(int argc,char *argv[])
{
int a,sum=0,i;
for(i=1;i<argc;i++)
{
	a=atoi(argv[i]);
	sum=sum+a;
}
printf("%d\n",sum);
}
