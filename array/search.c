#include<stdio.h>
int *search(int* a,int x,int num)
{	
	while(x)
	{
		if(*a==num)
			break;
		printf("x=%d  a=%d\n",x,*a);	
		a++;x--;
	}
	printf("after while x=%d >>afterwhile a=%d\n",x,*a);
	if(x==0)
		return NULL;
	else
		return a;
}

main()
{
	int a[10]={10,20,30,40,50,60,70,80,90,100};
	int i,num,*p;
	for(i=0;i<10;i++)
		printf(" %d",a[i]);
		printf("\nenter the number you want to search\n");
		scanf("%d",&num);
	p=search(a,10,num);
	if(p==NULL)
		printf("not found.....\n");
	else
		printf("pos=%d\n",p-a);
}

