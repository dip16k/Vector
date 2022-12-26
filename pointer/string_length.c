#include<stdio.h>
main()
{
	char *p="name dip";
	int size;
	while(*p!='\0')
		p++;
	printf("%d\n",p-"name dip");
}
