#include<stdio.h>
main()
{
	char ch;
	while((ch=getchar())!='\n')
	{
		if(ch>='A' && ch<='Z')
			ch=ch|(1<<5);//turning on 32 bit to change it lower case
		printf("%c",ch);
	}
printf("\n done upper to lower\n");
}
