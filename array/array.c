#include<stdio.h>
main()
{
	int a[10];
	int i,j;
	printf("enter data to array\n");
	for(i=0;i<10;i++)// if put a semicolon after loop than scanf is waiting for input at the value of i which is beyond the range of arr so it will thorw an error of stack meshing
		scanf("%d",&a[i]);
	
	for(i=0;i<=20;i++)
		printf(" %d",a[i]);
// we are trying to read the value of beyond the arry we can access but it is garbase values
}
