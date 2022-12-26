#include"headers.h"
// use fork for multiprocesing

main()
{
	int shmid;
	char *shm,tmp[100];// to handel shared memory block
	shmid=shmget(1,100,IPC_CREAT|0660);
	if(shmid==-1)
		perror("shmget");
	shm=shmat(shmid,NULL,0);
	if(shm==NULL)
		perror("shmat");
	while(1)
	{
	//	strcpy(tmp,shm);
		//if(strcmp(tmp,shm)==0)
	//	{//do nothing
	//		}
	//	else
			printf("shm: %s\n",shm);
				sleep(1);/// sleep so just data remian on screen ..
			system("clear");//after sleep use clear 
	}
}
