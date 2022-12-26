#include<stdio.h>
#include<stdlib.h>
typedef struct bst{
			struct bst *left;
			int data;
			struct bst *right;
		}TREE;
add(TREE **head,int n)
{
	if((*head)==NULL)
	{
		(*head)=calloc(1,sizeof(TREE));
		(*head)->data=n;
	}
	else if(n<((*head)->data))
		add(&((*head)->left),n);
	else
		add(&((*head)->right),n);
}
//////////////
print(TREE *head)
{
	if(head)
	{
		print(head->left);
		printf("%d ",head->data);
		print(head->right);
	}
}
///////////
main()
{
	TREE *head=NULL;
	char ch;
	int n;
	while(1)
	{
		printf("a:add\tp:print\ts:search\td:delete\te:exit\n");
		scanf(" %c",&ch);
		switch(ch)
		{
			case 'a':{ printf("enter data\n");
					scanf("%d",&n);
					add(&head,n); break;
				}
			case 'p':print(head); break;
			case 's':
			case 'd':
			case 'e':return;
			default:printf("invalid option\n");
				break;
		}//switch
	}//while
}//main
