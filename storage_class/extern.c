#include<stdio.h>
main()
{
extern int sum;
int num1,num2;
printf(" main function\n");
display();
printf(" display1\n");
printf("enter two digit\n");
scanf("%d%d",&num1,&num2);
sum=add(num1,num2);
printf("sum=%d\n",sum);

display();

}

