#include<stdio.h>
char *string()
{
static char s[100]="dileep";
return s;
}

///////////////////////////////
main()
{
char *p;
p=string();
printf("return string=  %s\n",p);
}

