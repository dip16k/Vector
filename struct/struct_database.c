#include<stdio.h>
#include<string.h>
int count=0;
/////////// structure definition /////////////////
struct student{
		char name[10];
		int roll;
		float marks;
		}v1;
/////////// input function ////////////////////////
void input(struct student *p)
{	
	printf("enter name of student\n");
		scanf("%s",((p+count)->name));
	printf("enter roll number\n");
		scanf("%d",&((p+count)->roll));
	printf("enter marks\n");
		scanf("%f",&((p+count)->marks));
count++;
}
////////////// print function /////////////////
void print(struct student *p)
{
	int i;
		for(i=0;i<count;i++)
	printf("index=%d  %s\t%d\t%f\n",i,(p+i)->name,(p+i)->roll,(p+i)->marks);
}
/////////// sort ///////////////////////////
void sort(struct student *p)
{
	int i,j,n;
	char ch,temp[10];
	printf("n:name vise sorting r:roll number vise m:marks vise\n");
		scanf("%c",&ch);getchar();
	if(ch=='n')
	{
		for(i=count-1;i>0;i--)
		{
			for(j=0;j<i;j++)
			{
				if(strcmp(p[j].name,p[j+1].name)>0)
				{
					v1=p[j];
					p[j]=p[j+1];
					p[j+1]=v1;
					
				}
			}
		}
	}
	else if(ch=='r')
	{
		for(i=count-1;i>0;i--)
		{
			for(j=0;j<i;j++)
			{
				if(p[j].roll>p[j+1].roll)
				{
					v1=p[j];
					p[j]=p[j+1];
					p[j+1]=v1;
				}
			}
		}
	}
	else if(ch=='m')
	{
		for(i=count-1;i>0;i--)
		{
			for(j=0;j<i;j++)
			{
				if(p[j].marks>p[j+1].marks)
				{
					v1=p[j];
					p[j]=p[j+1];
					p[j+1]=v1;
				}
			}
		}	
	}
		
}
////////////// delete /////////////////
void delete(struct student *p,int size)
{
	int num,location,i;
	char ch,name[10];
	printf("i:index delete n:mane delete r:rollnumber delete\n");
		scanf("%c",&ch);getchar();
	if(ch=='i')
	{
		printf("enter index\n");
		scanf("%d",&num);getchar();
		memmove(p+num,p+num+1,size+1);
	}
	else if(ch=='n')
	{
		printf("enter name\n");
			gets(name);
		for(i=0;i<count;i++)
		{
			if(p=strstr(p[i].name,name))
			{
				location=p[i];
				printf(" found at%d",location);
				memmove(p+location,p+location+1,size+1);
			}
		}
	}

printf("delete succefully\n");
count--;
}
//////////////// main ///////////////
main()
{
	struct student v[10];// structure local variable declaration
	char ch;
	int size;
		size=sizeof(v);
	while(1)
	{
		printf("i:input\tp:print\tq:quit\ts:sort\td:delete\n");
		scanf(" %c",&ch); getchar();//buffer clear
		switch(ch)
		{
			case 'i': input(v);break;
			case 'p':print(v); break;
			case 'q':return;
			case 'd':delete(v,size);break;
			case 's':sort(v);break;
				default:printf("invalid option\n");
					break;
		}//switch
	}//while
}// main
