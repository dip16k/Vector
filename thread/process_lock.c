#include"headers.h"
#include"pthread.h"
pthread_t id1,id2,id3;
pthread_mutex_t m;
void *f1(void *p)
{
	char str[100]="ABCDEFGHIJ";
	int fd,i;
	printf("thread 1...\n");
	fd=open("f1",O_CREAT|O_WRONLY|O_APPEND,0660);
	if(fd==-1)
	{printf("fail to open function 1..\n"); return;}

	pthread_mutex_lock(&m);// lock
	for(i=0;str[i];i++)
	{
		write(fd,str+i,1);
		pthread_mutex_unlock(&m);/// unlock
	}
printf("thread f1 done...\n");
	
}
void *f2(void *p)
{
	char str[100]="1234567890";
	int fd,i;
	printf("thread 2...\n");
	fd=open("f1",O_WRONLY|O_CREAT|O_APPEND,0660);
	if(fd==-1)
	{printf("fail to open function 2...\n"); return;}

		pthread_mutex_lock(&m);//aplly lock
		for(i=0;str[i];i++)
		{
			write(fd,str+i,1);
			pthread_mutex_unlock(&m);/// unlock;
		}
	
printf("thread f2 done...\n");
}
void *f3(void *p)
{
	printf("thread 3..\n");
	int fd,i;
	char str[100]="abcdefghij";
	fd=open("f1",O_WRONLY|O_CREAT|O_APPEND,0660);
	if(fd==-1)
	{printf("thread 3 fail too open\n"); return;}
	//lock
	pthread_mutex_lock(&m);
	for(i=0;str[i];i++)
	{
			write(fd,str+i,1);
			pthread_mutex_unlock(&m);// unlock
	}
printf("thread 3 done....\n");
}
main()
{
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
