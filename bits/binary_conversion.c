#include<stdio.h>
main()
{
	int data ,bit;
		printf("enter data\n");
			scanf("%d",&data);
		bit=31;
		while(bit>=0)
		{
			printf("%d",(data>>bit)&1);// binary conversion of given data
			bit--;
		}
printf("\nbinary of given data done\n");
}
