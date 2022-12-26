#include<stdio.h>
main()
{
	int data ,bit;
	printf("enter data\n");
		scanf("%d",&data);
	printf("entre bit you want to cheak\n");
		scanf("%d",&bit);
	(data&(1<<bit))?printf("set\n"):printf("clear\n");
}
/* we use right shift for binary conversion and left shift fo bit testing*/
