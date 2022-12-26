#include"pthread.h"
#include"headers.h"
pthread_t id1,id2;
int fd;
void *f1(void *p)
{	
	char str[100]="1234567890";
	int i,index=0,semval=0;
//	printf(p);
	for(i=0;str[i];i++)
	{
			write(fd,str+i,1);
	}
}
void *f2(void *p)
{
//	printf(p);
	char str[100]="ABCDEFGHIJ";
	int i,index=1,semval=0;
	for(i=0;str[i];i++)
	{
			write(fd,str+i,1);
	}
}

main(int argc,char **argv)
{
	pthread_create(&id1,NULL,f1,"thread..1\n");
	pthread_create(&id2,NULL,f2,"thread..2\n");
	int id,index,semval;
	struct sembuf v;
	v.sem_num=0;
	v.sem_op=0;
	v.sem_flg=0;
	semop(id1,&v,1);
	semop(id2,&v,1);
/*	if(argc!=3)
	{	printf(" <index>   <semvalue>\n");
		return;
	}*/
	id=semget(1,3,IPC_CREAT|0660);
	if(id==-1)
		perror("semget");
	printf("id=%d  PID=%d\n",id,getpid());

	fd=open("f1",O_WRONLY|O_CREAT,0660);
	if(fd==-1)
		perror("open");


	index=atoi(argv[1]);
	if((semval=semctl(id,index,GETVAL))==-1)
		perror("semctl");	
	printf("index=%d semval=%d\n",index,semval);
/*		semval=atoi(argv[2]);
	if(semctl(id,index,SETVAL,semval)==-1)
		perror("semctl");
	printf("semval now=%d\n",semval);
*/	

pthread_join(id1,0);
pthread_join(id2,0);
printf("exit\n");
}
