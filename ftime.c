#include"headers.h"
main()
{
	struct timeb v;
	struct tm *tmptr;
	char timeString[20];
	while(1)
	{
		ftime(&v);
		tmptr=localtime(&v.time);
		strftime(timeString,20,"%T",tmptr);
		printf("%s %d\n",timeString,v.millitm);
		sleep(2);
	}
}
