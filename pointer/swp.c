#include<stdio.h>
main()
{

	int temp, a=10, b=20,*p,*q;
printf("a=%d\tb=%d\n",a,b);	
	p=&a;
	q=&b;
	
/*emp=*p;
	*p=*q;
	*q=temp;*/
	a=*q;
	b=*p;
	printf("a=%d\tb=%d\n",a,b);
}	
	
