#include<stdio.h>
main()
{
	int data,bit;
	printf("enter digit\n");
		scanf("%d",&data);
	(data&1)?printf("odd\n"):printf("even\n");
}
/* testing the first digit of data is one or not
	if one than it is odd number
		else even number*/
