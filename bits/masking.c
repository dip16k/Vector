#include<stdio.h>
main()
{
	int x,y,z;
	printf("enter value of x\n");
	scanf("%d",&x);
	printf("enter value if y\n");
	scanf("%d",&y);
	z=x|y;
	printf("z=x|y=%d\n",z);
	z=x&y;
	printf("z=x&y %d\n",z);
	z=x^y;
	printf("z=x^y %d\n",z);
}
