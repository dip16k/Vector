#include<stdio.h>
#include<stdarg.h>
print(int count,...)
{
	va_list handler;
	va_start(handler,count);
	while(count--)
	{
		printf("%s ",va_arg(handler,char *));
	}
}
////////main
main()
{
	print(3,"ABC\n","XYZ\n","LMN\n");
}
