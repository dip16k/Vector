#include"headers.h"
struct msg{
		char msgbox[20];
		long type;
		};//remmber this semicolon it dosent give warinin it gives only unpredictable output
main(int argc,char **argv)
{
	struct msg v;
	int id,n;
	if(argc!=2)
	{
		printf(" use type 0 1 2 any\n");
			return;	
	}
	id=msgget(1,IPC_CREAT|0660);
	if(id==-1)
		perror("msgget");
		n=atoi(argv[1]);
		msgrcv(id,&v,n,0);//flag zero
		printf("recv msg: %s\n",v.msgbox);
}
