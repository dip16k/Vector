#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct student{
			int roll;
			char name[10];
			struct student *link;
			}NODE;
NODE *head,v;// global variable of file type
///////////// input function
input()
{
	NODE *new;
	new=malloc(sizeof(NODE));
		printf("enter roll number\t");
			scanf("%d",&new->roll);
		printf("enter name \t");
			scanf("%s",new->name);
	if(head==NULL)
	{
		head=new;
		new->link=0;
	}
	else if(new->roll<head->roll)
	{
		new->link=head;
		head=new;
	}
	else 
	{
		NODE *pre,*temp=head;//for traversing initialize with head
		while((temp)&&(temp->roll<new->roll))
		{
			pre=temp;
			temp=temp->link;
		}
		new->link=pre->link;
		pre->link=new;
	}
}
/////////  print function  //////
print()
{	
	NODE *temp=head;
	while(temp)
	{	
		printf("%d\t%s\n",temp->roll,temp->name);
		temp=temp->link;
	}
}
///////// delete function /////////
delete()
{
	NODE *pre,*temp=head;
	int r;
		printf("enter roll you want to delete\n");
			scanf("%d",&r);getchar();
		while((temp)&&(temp->roll!=r))
		{
			pre=temp;
			temp=temp->link;
		}
		if(temp==NULL)
		{
			printf("roll number ot found\n");
				return;
		}
		else if(temp==head)
		{
			head=head->link;
			free(temp);
		}
		else
		{
			pre->link=temp->link;
			free(temp);
		}
printf("deleted.....\n");
}
/////////// save file ///////////////
save()
{	
	NODE *temp=head;//temp initialize with head pointer which contain hole data
	FILE *fp;
		fp=fopen("record","w");
	while(temp)//travesing
	{
		fwrite(temp,sizeof(NODE),1,fp);//writing to file
		temp=temp->link;
	}
fclose(fp);//file closed
printf("saved..\n");
}
//////////  syn_file  //////
syn_file()
{//making link list from file
printf("synchronization .... loading data...............\n");
	FILE *fp;
	NODE *new,*last;
	fp=fopen("record","r");
	if(fp==NULL)
	{
		printf(" file not exist....input data\n");
			return;
	}
	while((fread(&v,sizeof(NODE),1,fp))==1)// reading from file
	{// 1 node data store in v
		new=malloc(sizeof(NODE));
		new->roll=v.roll;// roll copy
		strcpy(new->name,v.name);//name copy
		if(head==0)
			head=new;
		else
			last->link=new;
		last=new;
	}
fclose(fp);	
}
////////// main //////////////
main()
{
	char ch;
	syn_file();//loading peivious file
	while(1)
	{
		printf("i:input\tp:print\td:delete\ts:save\te:exit\n");
			scanf(" %c",&ch);	
		switch(ch)
		{
			case 'i': input(); break;
			case 'p': print(); break;
			case 'd': delete(); break;
			case 's': save(); break;
			case 'e': return;
		default:printf("invalid option\n");
				break;
		}
	}//while
}//main
	
