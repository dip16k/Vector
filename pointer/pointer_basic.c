#include<stdio.h>
main()
{
int a=20,b=10;
int *x,*y;//integer pointer
x=&a;// x is capable of holding a address of a
y=&b;
printf("sum=%d\n",*x + *y);
}

