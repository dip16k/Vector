#include<stdio.h>
int *array()
{
static	int a[10]={11,22,33,44,55,66,77,88,99,100};
return a;
}
////////////////////////////////
main()
{
int *p,i;
p=array();
for(i=0;i<10;i++)
{
printf(" %d",p[i]);
}

}///////////////////////////////
