#include"headers.h"
main()
{
	struct timeb v1,v2;
	time_t t;
	struct timeval v[2];
	struct tm *tmptr1,*tmptr2,*tmptr;
	int i,num,time;
	char timeString[20],dateSting[20];
		ftime(&v1);//starting process time1
		tmptr1=localtime(&v1.time);
		strftime(timeString,20,"%T",tmptr1);	
		printf("%s\n",timeString);	
	printf("enter a number\n");
	scanf("%d",&num);
	for(i=2;i<num;i++)
	{
		if(num%i==0)
			break;
	}
	if(i==num)
		printf("given number is a prime number\n");
	else
		printf(" given number is not a prime number\n");
sleep(2);// 2sec delay
	
	ftime(&v2);
	tmptr2=localtime(&v2.time);
	strftime(timeString,20,"%T",tmptr2);	
	printf("%s\n",timeString);//time 2
	
		v[0].tv_sec=v2.time-v1.time;	
		printf("timetaken in entire process %d\n",v[0].tv_sec);
}
