#include<stdio.h>
#include<string.h>
mycopy(char *p1,char *p2)
{
	while((*p2++=*p1++)!='\0');//copy the value at p
printf("done\n");
}
///////
main()
{
	char str1[20],str2[20];
	printf("enter a string\n");
		gets(str1);
	mycopy(str1,str2);
printf("%s\t%s\n",str1,str2);
}
