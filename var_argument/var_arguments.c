#include<stdio.h>
#include<stdarg.h>
int print(int n,...)
{	
	int next=0;
	va_list handler;
	va_start(handler,n);
	while(n--)
	{
		next=next+va_arg(handler,int);
	}
	va_end(handler);
		return next;
}
void sprint(int count,...)
{
	va_list handler;
	va_start(handler,count);
	while(count--)
	{
		printf("%s\n",va_arg(handler,char* ));
	}
}
main()
{
	int i=10,j=20,k=30,l=40,total;
	char str1[10]="dip",str2[]="ABC",str3[]="XYZ";
		printf("var aguments\n");
	total=print(4,i,j,k,l);
		printf("*total=%d\n",total);
	sprint(3,str1,str2,str3);
printf("\tdone\n");
}
