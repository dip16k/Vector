#include"headers.h"
#include"pthread.h"
pthread_t id1,id2;
void *f1(void *p)
{
	printf("in function f1\n");
}
void *f2(void *p)
{
	printf("in function f2\n");
}
main()
{
	pthread_create(&id1,NULL,f1,NULL);
	pthread_create(&id2,NULL,f2,NULL);
	printf("main \n");
		pthread_join(id1,0);
		pthread_join(id2,0);
printf("exit......\n");
}
