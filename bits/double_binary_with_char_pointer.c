#include<stdio.h>
main()
{
	double d;
	char *p;
	int bit,i;
		printf("entre real data\n");
			scanf("%lf",&d);
	p=&d;
		for(i=7;i>=0;i--)
		{
			p=(p+i);
			for(bit=7;bit>=0;bit--)
				printf("%d",(*p>>bit)&1);
		}
printf("\n double binary with the help of char pointer done\n");
}
