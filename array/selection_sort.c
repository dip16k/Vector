#include<stdio.h>
main()
{
	int i,j,temp;
	int a[10];
	printf("enter data to insert in array\n");
	for(i=0;i<10;i++)
		scanf("%d",&a[i]);
	for(i=0;i<10;i++)
	{
		for(j=i+1;j<10;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	for(i=0;i<10;i++)
		printf(" %d",a[i]);
printf("\n");
}
