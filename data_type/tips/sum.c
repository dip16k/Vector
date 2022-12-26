#include<stdio.h>
int add(int x,int y)
{
	return printf("%*c%*c", x,'\r', y,'\r');
}
main()
{
	printf("sum=%d\n",add(1,2));
}
