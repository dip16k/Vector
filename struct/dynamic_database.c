#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int count=0;
struct DOB{
		int day;
		char month[10];
		int year;
       		};
 struct student{
		char name[100];
		int roll;
		float marks;
		struct DOB dob;
		}v;
///////////// input function  ///////////////
void input(struct student **p)
{
	*p=realloc(*p,sizeof(struct student)*(count+1));
	printf("enter name of student\t");
		scanf("%s",(*p+count)->name);
	printf("enter roll number \t");
		scanf("%d",&((*p+count)->roll));getchar();
	printf("enter marks\t");
		scanf("%f",&((*p+count)->marks));getchar();
	printf("D.O.B enter date\t");
		scanf("%d",&((*p+count)->dob.day));getchar();
	printf("enter month\t");
		scanf("%s",((*p+count)->dob.month));
	printf("enter year\t");
		scanf("%d",&((*p+count)->dob.year));getchar();
count++;
}
/////////// print function /////////////////
void print(struct student  *p)
{
	int i=0;
	for(i=0;i<count;i++)
	{
		printf("index=%d  %s\t%d\t%f\t%d\t%s\t%d\n",i,(p+i)->name,(p+i)->roll,(p+i)->marks,(p+i)->dob.day,(p+i)->dob.month,(p+i)->dob.year);
}//for loop
}//function
///////////////  delete function //////
void delete(struct student *p)// modify actual data
{
	int i,num,freq=0;
	char st[10];
	search:
	printf("search for record\n");
		scanf("%s",st);getchar();
	for(i=0;i<count;i++)
	{
		if(strstr(p[i].name,st))
		{
			printf("found at index=%d\tname=%s\n",i,(p+i)->name);
			freq++;
		}
	}
		if((i==count)&&(freq==0))
		{
			printf("record not found search again\n");
			goto search;
		}
		else if(freq>1)
	{
	printf("multiple name exist->go for index delete-> enter index\n");
			scanf("%d",&num);getchar();
	memmove(p+num,p+num+1,sizeof(struct student)*(count-num));
	}
		else if(freq==1)
		{
			printf("deleting\t");
		memmove(p+i,p+i+1,sizeof(struct student)*(count-i));
		}
printf("delete succesfully\n");
count--;
}
///////// sorting /////////////
void sort(struct student *p)
{
	int  i,j;
	char choice;
	printf("n:name vise\tr:roll number vise sorting\n");
		scanf("%c",&choice);getchar();
	if(choice=='n')
	{
		for(i=count-1;i>0;i--)
		{
			for(j=0;j<i;j++)
			{
				if(strcmp(p[j].name,p[j+1].name)>0)
				{// swapping assigning 1 structure to another
					v=p[j];
					p[j]=p[j+1];
					p[j+1]=v;
				}
			}
		}
	}
	else if(choice=='r')
	{
		for(i=count-1;i>0;i--)
		{
			for(j=0;j<i;j++)
			{
				if(p[j].roll>p[j+1].roll)
				{
					v=p[j];
					p[j]=p[j+1];
					p[j+1]=v;
				}
			}
		}
	}
printf(" sorted\n");
}			
////////////   main ///////////
main()
{
 	struct student *p;
	int i; 
	char ch;
	p=malloc(sizeof(struct student));
	while(1)
	{
		printf("i:input\tp:print\tq:quit\td:delete\ts:sort\n");
			scanf("%c",&ch);getchar();
		switch(ch)
		{
			case 'i': input(&p); break;
			case 'p':print(p); break;
			case 'q': return;
			case 'd':delete(p);break;
			case 's':sort(p);break;
				default: printf("invalid option\n");
		}
	}//while
}//main
