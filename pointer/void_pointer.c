#include<stdio.h>
main()
{
int a=3;
float f=2.5;
void *vp;
vp=&a;
printf("%d \n",*(int *)vp);
*(int *)vp=12;
printf("%d\n",*(int *)vp);
vp=&f;
printf("%f\n",*(float *)vp);

}

