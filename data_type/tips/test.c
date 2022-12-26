#include<stdio.h>
main()
{
	int v=011101;//101110
	int i;
	for(i=31;i>=0;i--)
		printf("%d",(v>>i)&1);
}
