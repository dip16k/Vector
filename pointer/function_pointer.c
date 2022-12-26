#include<stdio.h>
int sum(int x,int y)
{
	return (x+y);
}
int mul(int x,int y)
{
	return (x*y);
}
main()
{
	char ch;
	int a,b,result;
	int (*fptr)(int,int);//fptr is a pointer to function
	printf("enter value of a and b\n");
	scanf("%d%d",&a,&b);
	printf("enter operation + and *\n");
		scanf(" %c",&ch);
	if(ch=='*')
	{
		fptr=mul;
			result=fptr(a,b);	//function calling through pointer return received by result
		printf("mul result=%d\n",result);
	}
	else if(ch=='+')
	{
		fptr=sum;
			result=fptr(a,b);
		printf("sum result=%d\n",result);
	}
	else 
		printf("use above option only ** thankyou **\n");
}//main closed
