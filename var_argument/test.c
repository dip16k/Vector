#include<stdio.h>
#include<stdarg.h>
void print(char *ptr,...)
{
	va_list ap;
	va_start(ap,ptr);
	printf("%s\n",ptr);
	while(ptr=va_arg(ap,char*))
		printf("%s\n",ptr);
	va_end(ap);
}
main()
{
	char *p="1111",*p2="2222";
	char s1[]="abcdef",s2[]="xyz",s3[]="lmnopq";
	print(p,p2,NULL);
	print(s1,s2,s3,NULL);
}
