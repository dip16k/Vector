#include<stdio.h>
void reverse();
main()
{
printf("enter a string\n");
reverse();// function call
printf("\n");
}
void reverse()// function definition
{
char c;
scanf("%c",&c);
if(c!='\n')
{
reverse();// function calling itself
printf(" %c",c);
}
}///
