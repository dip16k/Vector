#include<stdio.h>


#define printf(x,y) printf(x,10) 


main()
{
	int i=10;
	i=20;
	printf("%d",i);
}
