#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<utime.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<sys/timeb.h>
main()
{
	struct timeb t1,t2;//for time function
	struct timeval v[2];//for conversign of time in usec
	struct tm *ptr1,*ptr2;// two pointer for receving time information fromlocal time function
	int num, i;
	char timeString[20];//for storing time information
	printf("enter a number to check weather it is prime  or not\n");
		scanf("%d",&num);
		ftime(&t1);
	ptr1=localtime(&t1.time);
	strftime(timeString,20,"%T",ptr1);//storning timeinformation in string from pointer ptr1
	printf("%s\n",timeString);
	for(i=2;i<num;i++)
	{
		if(num%i==0)
			break;
	}
	if(num==i)
		printf("given number is prime number\n");
	else
		printf("given number is not prime number\n");
usleep(100);//delay for 100 usec
	ftime(&t2);
	ptr2=localtime(&t2.time);
	strftime(timeString,20,"%T",ptr2);
		printf("%s\n",timeString);
	v[0].tv_usec=t2.millitm-t1.millitm;
	printf("time taken in entire process=%u usec\n",(unsigned int)v[0].tv_usec);
}//main
