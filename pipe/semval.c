#include"headers.h"
main()
{
	int id,semval;
	id=semget(1,2,IPC_CREAT|0660);
	if(id==-1);
		perror("semget");
		semval=semctl(id,0,SETVAL,0);
		printf("index=%d semval=%d\n",0,semval);
		semval=semctl(id,1,SETVAL,0);
			printf("index=%d semval=%d\n",1,semval);
}
