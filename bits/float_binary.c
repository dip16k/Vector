#include<stdio.h>
main()
{
	float f;
	int *p,bit;
		printf("enter float value\n");
			scanf("%f",&f);
	p=&f;
	for(bit=31;bit>=0;bit--)
	{
		printf("%d",(*p>>bit)&1);
	}
printf("\nfloat binary equivalent\n");
}
