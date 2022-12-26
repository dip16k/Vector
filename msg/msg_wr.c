#include"headers.h"
struct msg{
		char msgbox[20];
		long type;
	};
main(int argc,char **argv)
{
	struct msg v;
	int id;
	char str[20];
	id=msgget(1,IPC_CREAT|0660);
	if(id==-1)
	{
		printf("msgget failed..\n");return;
	}
//	v.type=atoi(argv[1]);
	printf("id=%d PID=%d\n",id,getpid());
	puts("enter a message\n");
		gets(v.msgbox);
	msgsnd(id,&v,20,0); //ipc id,structure,bytes ,flag
//	printf("message send......type=%ld\n",v.type);
}
