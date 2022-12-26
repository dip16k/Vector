#include<stdio.h>
main()
{
	char str[100];
	fscanf(stdin,"%[^\n]",str);
//	printf("%s \n",str);
	fprintf(stdout," :%s\n",str);
}
