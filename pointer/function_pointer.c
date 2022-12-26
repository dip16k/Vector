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
	int a,b,c,result=0;
	int (*fptr)(int,int);//fptr is a pointer to function which receive two int like function ant return int like a function return
	printf("enter two digits a and b\n");
	scanf("%d%d",&a,&b);
		printf("1:mul  2:sum\n");
		scanf("%d",&c);
	if(c==1)
	{
		fptr=mul;
		result=fptr(a,b);
	}
	else if(c==2)
	{
		fptr=sum;
		result=fptr(a,b);
	}
	else 		
		printf("invalid option thankyou\n");
printf("result=%d\n",result);
}//main
		

