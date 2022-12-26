#include<stdio.h>
main(int argc,char *argv[])
{
//argc=argc-(argc-1);
int i;
for(i=1;i<=3;i++)
{
printf("%c\n",*argv[i]);
//i=argv[1]+argv[2]+argv[3];
printf("%s\n",argv[i]);
}
}

