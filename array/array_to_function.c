#include<stdio.h>
void search(int a[2][4],int n,int r)
{
	int i=0,j=0;
	for(i=0;i<r;i++)
	{
		for(j=0;j<4;j++)
		{
			if(a[i][j]==n)
			{
				printf("found at [%d][%d]\n",i,j);
					return;
			}
		}
	}
}
		
main()
{
	int a[2][4];
	int i,j,n;
		printf("enter element for array\n");
		for(i=0;i<2;i++)
			for(j=0;j<4;j++)
				scanf("%d",&a[i][j]);
		printf("enter element to search\n");
		scanf("%d",&n);
		search(a,n,2);
printf("\n");
}
