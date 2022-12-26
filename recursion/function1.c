#include<stdio.h>
int zap(int n)
{
	if(n<=1)
return 1;
	else
return(zap(n-3)+zap(n-1));
}
/////////////////////////////////////
main()
{
int i;
printf("enter a number\n");
scanf("%d",&i);
printf(" result=%d\n",zap(i));
}
