#include"headers.h"
main(int argc,char **argv)
{
	int id,index,semval;
	if(argc!=3)
	{	printf(" <index>   <semvalue>\n");
		return;
	}
	id=semget(1,3,IPC_CREAT|0660);
	if(id==-1)
		perror("semget");
	printf("id=%d  PID=%d\n",id,getpid());
	index=atoi(argv[1]);
	if((semval=semctl(id,index,GETVAL))==-1)
		perror("semctl");	
	printf("index=%d semval=%d\n",index,semval);
		semval=atoi(argv[2]);
	if(semctl(id,index,SETVAL,semval)==-1)
		perror("semctl");
	printf("semval now=%d\n",semval);
	
printf("exit\n");
}
