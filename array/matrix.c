#include<stdio.h>
int (*mul(int (*p)[2],int (*q)[2],int num))[2]
{
	static int c[2][2];
		int i,j,k;
		for(i=0;i<2;i++)
			for(j=0;j<2;j++)
				for(k=0;k<2;k++)
					c[i][j]+=p[i][k]*q[k][j];
		return c;
}
main()
{
	int a[2][2],b[2][2];
	int (*c)[2];//pointer to an array
	int i,j,num	;
		printf("enter element for 1st matrix\n");
		for(i=0;i<2;i++)
			for(j=0;j<2;j++)
				scanf("%d",&a[i][j]);
		printf("enter element for second matrix\n");
		for(i=0;i<2;i++)
			for(j=0;j<2;j++)
				scanf("%d",&b[i][j]);
		c=mul(a,b,2);
		for(i=0;i<2;i++,printf("\n"))
			for(j=0;j<2;j++)
				printf("%d ",c[i][j]);
}
	
