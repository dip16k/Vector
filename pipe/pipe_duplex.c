#include<signal.h>
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/ipc.h>
#include<sys/types.h>
#include<fcntl.h>
#include<sys/sem.h>
void f1(int n)
{
	printf("signal received =%d\n",n);
	wait(0);
}
main()
{
	struct sembuf v;
	int id;
	int p1[2],p2[2];
	char str[100],str1[100];
	signal(SIGCHLD,f1);
	pipe(p1);
	pipe(p2);// creating pipe or file descriptor
		
		id=semget(1,2,IPC_CREAT|0660);//semaphore creation
		if(id==-1)
			perror("semget");
	
	if(fork())
	{
		printf("parent id=%d PPID=%d\n",getpid(),getppid());
		close(p1[0]);
		close(p2[1]);
		v.sem_num=0;v.sem_op=0;v.sem_flg=0;
		while(1)
		{
			semop(id,&v,1);
			semctl(id,0,SETVAL,1);
			semctl(id,1,SETVAL,1);
			printf("prent: typing......\n");
			gets(str);
			write(p1[1],str,50);
		
			semctl(id,1,SETVAL,0);//unlocking child
			read(p2[0],str1,50);
				printf("parent rcv: %s\n",str1);
			//semctl(id,1,SETVAL,0);//unlocking child
		}
	}
	else
	{
		printf("child id=%d PPID=%d\n",getpid(),getppid());
			close(p1[1]);
			close(p2[0]);
		v.sem_num=1;v.sem_op=0;v.sem_flg=0;
		while(1)
		{
			semop(id,&v,1);
			semctl(id,0,SETVAL,1);
			semctl(id,1,SETVAL,1);
			printf("child typing......\n");
				gets(str1);
			write(p2[1],str1,50);

			semctl(id,0,SETVAL,0);// unloking parent
				read(p1[0],str,50);
					printf("chld rcv: %s\n",str);
			//semctl(id,0,SETVAL,0);// unloking parent
		}
	}
		
}
