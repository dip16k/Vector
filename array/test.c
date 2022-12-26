#include<stdio.h>
main()
{
	int size,i;
	int a[size];//segmantation fault
		printf("enter the size of an array\n");
			scanf("%d",&size);
		for(i=0;i<size;i++)
			a[i]=i+10;
		for(i=0;i<size;i++,printf("size=%d\n",size))
			printf("%d ",a[i]);
printf("\n");
}
