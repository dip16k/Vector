#include<stdio.h>
print(char *p)
{
printf("in main %s\n",p);
if(*p)
print(p+1);
printf("in returning %s\n",p);
}
/////////////////////////////////////
main()
{
char a[100];
puts("enter a string\n");
gets(a);
print(a);
printf("\n");

}
