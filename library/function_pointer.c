#include<stdio.h>
#include<dlfcn.h>
int sum(int,int);
int mul(int,int);
main()
{
	void *handler;
	int (*p)(int,int);//it is a function pointer
	int a,b,c;
	int result=0;
		printf("enter two intigers\n");
		scanf("%d%d",&a,&b);
		printf("1=mul 2=sum\n");
		scanf("%d",&c);
	if(c==1)
	{
		handler=dlopen("./libDyn.so",RTLD_LAZY);
		if(handler==NULL)
		{
			printf("%s\n",dlerror());
			return;
		}
		p=dlsym(handler,"mul");
		if(p==NULL)
		{
			printf("%s\n",dlerror());
			return;
		}
		result=p(a,b);
	}
	else if(c==2)
	{
		handler=dlopen("./libDyn.so",RTLD_LAZY);
		if(handler==NULL)
		{
			printf("%s\n",dlerror());
			return;
		}
		p=dlsym(handler,"sum");
		if(p==NULL)
		{
			printf("%s\n",dlerror());
			return;
		}
		result=p(a,b);
	}
	else
		printf("invalid option ** thankyou**\n");
printf("result=%d\n",result);
}//main


