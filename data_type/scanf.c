#include<stdio.h>
main()
{
	char str[100];
	char arr[100];
/	printf("enter string\n");
//	scanf("%[a-z, ]",str);//now scanf read only a-z character and " " blank space 
//	printf("\n%s\n",str);
		printf("enter second string\n");
		scanf("%[^\n]",arr);//by this we can read character string upto new line with blank sapaces
	printf("\n%s\n",arr);
}
