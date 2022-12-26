#include"headers.h"
#include"pthread.h"
pthread_t id1,id2,id3;
pthread_mutex_t m;
int fd;
void *f1(void *p)
{
	char str[100]="ABCDEFGHIJ";
	int i,j;
	printf("thread 1...\n");

		for(j=0;j<6000;j++);
	pthread_mutex_lock(&m);// lock
	for(i=0;str[i];i++,pthread_mutex_lock(&m))
	{
		write(fd,str+i,1);
		pthread_mutex_unlock(&m);/// unlock
		for(j=0;j<6000;j++);
	}
printf("thread f1 done...\n");
	
}
void *f2(void *p)
{
	char str[100]="1234567890";
	int j,l;
	printf("thread 2...\n");
		for(j=0;j<6500;j++);
//		pthread_mutex_lock(&m);//aplly lock
		for(l=0;str[l];l++,pthread_mutex_lock(&m))
		{
			write(fd,str+j,1);
			pthread_mutex_unlock(&m);/// unlock;
		for(j=0;j<7000;j++);
		}
	
printf("thread f2 done...\n");
}
void *f3(void *p)
{
	printf("thread 3..\n");
	char str[100]="abcdefghij";
	int k,j;
		for(j=0;j<7000;j++);
//	pthread_mutex_lock(&m);
	for(k=0;str[k];k++,pthread_mutex_lock(&m))
	{
			write(fd,str+k,1);
			pthread_mutex_unlock(&m);// unlock
		for(j=0;j<8000;j++);
	}
printf("thread f3 done....\n");
}
main()
{
	fd=open("f1",O_WRONLY|O_CREAT,0660);
	if(fd==-1)
	{printf("fail to open...\n");return;}
		

	pthread_mutex_init(&m,0);
	pthread_create(&id1,NULL,f1,NULL);
	pthread_create(&id2,NULL,f2,NULL);
	pthread_create(&id3,NULL,f3,NULL);
		printf("main function\n");
	pthread_join(id1,0);
	pthread_join(id2,0);
	pthread_join(id3,0);

printf("exit....\n");
}
