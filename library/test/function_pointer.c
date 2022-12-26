#include<stdio.h>
#include<dlfcn.h>
int sum(int,int);
int mul(int,int);
main()
{
	int a,b,c,result;
	void *handler;//for handling dynamic library
	int (*fptr)(int,int);//fptr is a pointer to function
	printf("enter two digits a and b\n");
	scanf("%d%d",&a,&b);
		printf("1:mul  2:sum\n");
		scanf("%d",&c);
	if(c==1)
	{
		handler=dlopen("./libdyn.so",RTLD_LAZY);
		if(handler==NULL)
		{
			printf("%s\n",dlerror());// dlerror(void);
				return;
		}
		fptr=dlsym(handler,"mul");
		if(fptr==NULL)
		{
			printf("%s\n",dlerror());
			return;
		}
		result=fptr(a,b);
		printf("result=%d\n",result);
		dlclose(handler);
	}
	else if(c==2)
	{
		handler=dlopen("./libdyn.so",RTLD_LAZY);
		if(handler==NULL)
		{
			printf("%s\n",dlerror());
			return;
		}
		fptr=dlsym(handler,"sum");
		if(fptr==NULL)
		{
			printf("%s\n",dlerror());
			return;
		}
		result=fptr(a,b);
		printf("result=%d\n",result);
		dlclose(handler);
	}
	else
		printf("use above option thankyou\n");
}//main
	
