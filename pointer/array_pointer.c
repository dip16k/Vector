#include<stdio.h>
main()
{
int array[]={11,22,33,44,55,66};
int *ptr,i,k;
for(i=0;i<6;i++)
{
printf("%d ",array[i]);
ptr=&array[i];
printf("%d\n ",*ptr);
}
}

