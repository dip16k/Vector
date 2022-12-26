#include<stdio.h>
main()
{
	int data,bit;
		printf("enter data\n");
			scanf("%d",&data);
		printf("enter bit you want to clear\n");
			scanf("%d",&bit);
		data=data|(1<<bit);
	printf("bit is set now\n");
	printf("data=%d\n",data);
		printf("enter bit which you want to clear\n");
			scanf("%d",&bit);
		data=data&(~(1<<bit));
	printf("bit is cleared now \n");
		printf(" new data=%d\n",data);
}
