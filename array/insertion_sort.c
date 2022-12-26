#include<stdio.h>
main()
{
	int i,j,temp;
	int a[10];
	printf("enter element to array\n");
	for(i=0;i<10;i++)
		scanf("%d",&a[i]);
	for(i=1;i<10;i++)
	{
		temp=a[i];
		for(j=i-1;j>=0;j--)
		{
			if(temp<a[j])
			{
				a[j+1]=a[j];//cheaking node is insertable or not
			}
			else
				break;
		}
		a[j+1]=temp;
	}
	for(i=0;i<10;i++)
		printf(" %d",a[i]);
}
	
