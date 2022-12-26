#include<stdio.h>
#include<string.h>
main(int argc,char *argv[])
{
int a,b,i,j;
int num=0,num1=0;
float sp=1,x,y,sp1=1,l,m;
	if(argc!=4)
	{
		printf("invalid format\n");
	}
	else
{

a=atoi(argv[1]);
b=atoi(argv[3]);
 
	for(j=0;j<strlen(argv[1]);j++)
	{
		if(argv[1][j]=='.')
		{
			for(i=j+1;i<strlen(argv[1]);i++)
			{
				num=num*10+argv[1][i]-48;
				sp=sp*10;
			}
		}
	}
x=(float)num/sp;
	for(j=0;j<strlen(argv[3]);j++)
	{
		if(argv[3][j]=='.')
		{
			for(i=j+1;i<strlen(argv[3]);i++)
			{
				num1=num1*10+argv[3][i]-48;
				sp1=sp1*10;
			}
		}
	}
y=(float)num1/sp1;
l=a+x;
m=b+y;
			
	if(argv[2][0]=='+')
	printf("result=%f\n",l+m);
	if(argv[2][0]=='-')
	printf("result=%f\n",l-m);
	if(argv[2][0]=='/')
	printf("result=%f\n",l/m);
	if(argv[2][0]=='*')//* use '*' for multiplication 
	printf("result=%f\n",l*m);
}//else
}//main close
