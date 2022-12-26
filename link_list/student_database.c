#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct student {
			int roll;
			char name[10];
			float marks;
			struct student *link;//for self refrencing of structure
			}NODE;// new data type NODE
NODE *head;// structure type  global pointer variable declaratioin
///////// input function ////////////
input()//char *file_name)
{
//	FILE *fp;
	NODE *new;
	new=malloc(sizeof(NODE));// memory allocation for new pointer
		printf("enter roll\t");
			scanf("%d",&new->roll);
		printf("enter name\t");
			scanf("%s",new->name);
		printf("enter marks\t");
			scanf("%f",&new->marks);getchar();//buffer clearence
		if(head==NULL)
		{
			new->link=NULL;
			head=new;
		}
		else
		{// checkuing given roll no.is small or big for sorting
			if(new->roll<head->roll)
			{
				new->link=head;//new get head's link
				head=new;//now head store base add of new
			}
			else
			{
			NODE *temp,*pre;
			temp=head;
				while((temp)&&(temp->roll<new->roll))
				{	pre=temp;
					temp=temp->link;
				}
			new->link=pre->link;
			pre->link=new;
			}
		}
/*fp=fopen(file_name,"a");
fwrite(new,sizeof(NODE),1,fp);
fclose(fp);	**/
}
/////// print ////////////
print()//char *file_name)
{
	NODE *temp;
/*	FILE *fp;
	fp=fopen(file_name,"r");
	temp=malloc(sizeof(NODE));
	while((fread(temp,sizeof(NODE),1,fp))==1)
	{	
		printf("%s\t%d\t%f\n",temp->name,temp->roll,temp->marks);
		temp=realloc(temp,sizeof(NODE));
	}
	fclose(fp);*/
	temp=head;
	while(temp)
	{
		printf("%s\t%d\t%f\n",temp->name,temp->roll,temp->marks);
		temp=temp->link;
	}
}
/////////// delete function ////////
delete()
{
	int r;
	NODE *pre,*temp=head;
		printf("enter roll nubmer to delete\n");
			scanf("%d",&r);getchar();// new line clear
		while((temp)&&(temp->roll!=r))
		{
			pre=temp;
			temp=temp->link;
		}
			if(temp==0)
			{
				printf("entered roll number not found\n");
				free(temp);
					return;
			}
			else
			{
				pre->link=temp->link;
					free(temp);
			}
}// delete function end
/////////////   main ////////////
main()
{
	char ch,str[10];
//		printf("enter file name to open\n");
//			gets(str);
	while(1)
	{
		printf("i:input\tp:print\td:delete\te:exit\n");
			scanf(" %c",&ch);
		switch(ch)
		{
			case 'i':input();  break;
			case 'p':print(); break;
			case 'd':delete(); break;
			case 'e':return;
				default:printf("invalid option\n");
		}
	}//while
}//main


