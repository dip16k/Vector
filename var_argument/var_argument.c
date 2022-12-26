#include<stdio.h>
#include<stdarg.h>
///// print function ///////////////
print(int x,...)
{	
	va_list handler;
	va_start(handler,x);
	printf("number of count=%d\n",x);
		while(x--)
		{
			printf("%d\t",va_arg(handler,int));
		}
		
	va_end(handler);
}
///////// string print ///////
sprint(int count,...)
{
	va_list handler;
	va_start(handler,count);
		while(count--)
		{
			printf("%s\n",va_arg(handler,char *));
		}
	va_end(handler);
	
}
////////// main //////////////
main()
{
	int i=10,j=20,k=30;
	char str[10]="dipsa";
	char str1[10]="abc",str2[10]="xyz";
		print(3,i,j,k);
		printf("function 2\n");
	sprint(3,str,str1,str2);
}
