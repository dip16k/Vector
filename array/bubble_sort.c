#include<stdio.h>
main()
{
	int a[10];
	int i,j,temp;
	printf("enter element for the array\n");
	for(i=0;i<10;i++)
		scanf("%d",&a[i]);
	for(i=1;i<10;i++)
	{
		for(j=0;j<i;j++)
		{
			if(a[j]>a[i])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	for(i=0;i<10;i++)
		printf(" %d",a[i]);
	printf("\nmax=%d min=%d\n",a[9],a[0]);
}
