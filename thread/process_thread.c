#include"pthread.h"
#include"headers.h"
pthread_t id1,id2;
pthread_mutex_t m1,m2;
int fd;
void *f1(void *p)
{
	int i,j;
	char str[100]="ABCDEFGHIJ";
	printf(p);
	for(i=0;str[i];i++)
	{
		pthread_mutex_lock(&m1);
			write(fd,str+i,1);
		pthread_mutex_unlock(&m2);
	}
}
void *f2(void *q)
{
	printf(q);
	int i;
	char str[100]="1234567890";
	for(i=0;str[i];i++)
	{
		pthread_mutex_lock(&m2);
			write(fd,str+i,1);
		pthread_mutex_unlock(&m1);
	}
}
main()
{
	pthread_mutex_init(&m1,0);
	pthread_mutex_init(&m2,0);
	fd=open("f1",O_WRONLY|O_CREAT,0660);
	if(fd==-1)
		perror("open"); 
	pthread_create(&id1,NULL,f1,"thread1..\n");
	pthread_create(&id2,NULL,f2,"thread2...\n");
		pthread_join(id1,0);
		pthread_join(id2,0);
printf("main exit...\n");
}
