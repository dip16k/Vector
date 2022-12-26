#include<stdio.h>
main()
{
	int num;
	printf("enter number \n");
		scanf("%d",&num);
	(num&(1<<0))?printf("odd\n"):printf("even\n");
}
