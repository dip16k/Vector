#include"headers.h"
main()
{
	int shmid;
	char *shm;
	shmid=shmget(1,100,IPC_CREAT|0660);// 1 for create in not exist ,if exist than open exixtin, size ,
	if(shmid==-1)
		perror("shmid");
	shm=shmat(shmid,NULL,0);// no fla choosen opration based on os so null
	if(shm==NULL)
		perror("shmat");
	while(1)
	{
		printf("msg....\n");
			gets(shm);
	}
}
		
