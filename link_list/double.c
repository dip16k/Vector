#include<stdio.h>
#include<stdlib.h>
typedef struct dll{
			struct dll *back;
			int data;
			struct dll *next;
		}DLL;
///////// add //////
add(DLL **head)
{	
	DLL *new;
	new=calloc(1,sizeof(DLL));
	printf("enter data\n");
		scanf("%d",&(new->data));
	if((*head)==NULL)
	{
		(*head)=new;
	}
	else if(new->data<(*head)->data)
	{
		new->next=(*head);	
		(*head)->back=new;
		(*head)=new;
	}
	else
	{
		DLL *temp=(*head);
		while((temp->next)&&(temp->next->data<new->data))
		{
			temp=temp->next;
		}
		new->back=temp;
		new->next=temp->next;
		if(temp->next)
		temp->next->back=new;
		temp->next=new;
	}
}
//////
print(DLL *head)
{
	while(head)
	{
		printf("%d ",head->data);
		head=head->next;
	}
}
///////////
delete(DLL **head)
{
	DLL *temp=(*head);
	int n;
	printf("enter data to delete\n"); 
		scanf("%d",&n);
	
	if((*head)==NULL)
	{
		printf("nothing to delete \n"); return;
	}
	else if((*head)->data==n)
	{
		temp=(*head);
		(*head)=(*head)->next;
		if(*head)
			(*head)->back=0;
		free(temp);
	}
	else
	{
		temp=(*head);
		while((temp)&&(temp->data)!=n)
		{
		temp=temp->next;
		}
		if(temp==0)
		{
			printf("node not found\n");
				return;
		}
		else
		{
			temp->back->next=temp->next;
			if(temp->next)
				temp->next->back=temp->back;
			free(temp);
		}
	}
}
////////////
main()
{
	DLL *head=NULL;
	char ch;
	while(1)
	{
		printf("a:add\tp:print\td:delete\te:exit\n");
			scanf(" %c",&ch);
		switch(ch)
		{
			case 'a':add(&head); break;
			case 'p':print(head); break;
			case 'd':delete(&head); break;
			case 'e':return;
			default:printf("invalid option\n");
				break;
		}//switch
	}//while
}//main
