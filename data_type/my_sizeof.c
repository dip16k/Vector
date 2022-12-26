#include<stdio.h>
#define my_sizeof(data) (char*)(&data+1)-(char*)(&data)
main()
{
	int i;
	double d;
	printf("sizeof=%d\n",my_sizeof(d));
}
