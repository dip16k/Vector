#include<stdio.h>
main()
{
	char ch;
	while((ch=getchar())!='\n')// getting char up to new line if found than break
	{
		if(ch>='a' && ch<='z')
			ch=ch&(~(1<<5));// clearing 5th bit of a char to change it upper case
		printf("%c",ch);
	}
printf("\n lower to upper conversion done\n");
}
