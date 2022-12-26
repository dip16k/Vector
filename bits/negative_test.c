#include<stdio.h>
main()
{
	int data ,bit,n;
	printf("enter data to cheak it is negative or not\n");
		scanf("%d",&data);
		bit=(data>>31)&1;// for binary or data conversion use right shift >> negative bit cheaking use right shift
	if(bit==1)
		printf("negative number %d\n",data);
	else
		printf("positive number %d\n",data);
}
