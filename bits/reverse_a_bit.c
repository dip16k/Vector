#include<stdio.h>
main()
{
	int data ,bit;
	int r1,r2,i,j;
		printf("enter data\n");
			scanf("%d",&data);
/* printing binary equivalent of data*/
	bit=31;
	while(bit>=0)
	{
		printf("%d",(data>>bit)&1);
		bit--;
	}
printf("\n now reversing the digits\n");
	i=31;j=0;
	while(i>j)
	{
		r1=(data>>i)&1;
		r2=(data>>j)&1;// binary conversion
		if(r1!=r2)
		{
			data^=(1<<i);
			data^=(1<<j);// complimanting of bits
		}
		i--;j++;// incerement the <j>and decrement the <i>
	}
printf("reversing done now printng\n");
	bit=31;
	while(bit>=0)
	{
		printf("%d",(data>>bit)&1);
		bit--;
	}
printf("\n done\n");
}
