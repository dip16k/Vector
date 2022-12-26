#include<stdio.h>
int mul(int,int);
int sum(int,int);
main()
{
	int a,b,c;
	int result;
	printf("enter two intigers\n");
		scanf("%d%d",&a,&b);
	printf("1=mul 2=sum\n");
		scanf("%d",&c);
	if(c==1)
		printf("%d\n",mul(a,b));
	else if(c==2)
		printf("%d\n",sum(a,b));
	else
		printf("invalid option\n");
}//main
