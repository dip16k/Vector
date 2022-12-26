/* char int have cyclic property if lower value reached than it again goes for higer value*/
#include<stdio.h>
main()
{
unsigned char ch;
unsigned int i;
	ch=i=0;
	ch=ch-1;
	i=i-1;
	printf("ch=%d i=%u \n",ch,i);
}
