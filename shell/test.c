#include<stdio.h>
#include<unistd.h>
main(int argc,char **argv)
{
	char *p[4]={"ls","-l","-i",NULL};
	execvp(p[0],p);
}
