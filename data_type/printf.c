#include<stdio.h>
main()
{
	float num;
	int w,p;
	printf("enter w and p\n");
	scanf("%d%d",&w,&p);
		printf("enter real value\n");
		scanf("%f",&num);
	printf("%*.*f\n",w,p,num);
}
/*


 *.* format allow to use width and precision at run time*/ 
