#include<stdio.h>
#include<stdlib.h>
typedef struct bst{
			struct bst *left;
			int data;
			struct bst *right;
		}TREE;
add(TREE **root,int n)
{
	if((*root)==NULL)
	{
		(*root)=calloc(1,sizeof(TREE));
		(*root)->data=n;
	}
	else if(n<((*root)->data))
		add(&((*root)->left),n);
	else
		add(&((*root)->right),n);
}
/////////////// PRINT ///////////////////////
print(TREE *root)
{
	if(root)
	{
		print(root->left);
		printf("%d ",root->data);	
		print(root->right);
	}
}
//////////// SEARCH //////////////////////////
TREE *search(TREE *root,int n)
{
	if(root)
	{
		if(root->data==n)
			return root;
		else if(n<(root->data))
			search(root->left,n);
		else
			search(root->right,n);
	}
}
//////////// DELETE ///////////////////
delete(TREE **root,int n)
{
	TREE *temp=NULL;
	if((*root)->data==n)
	{
		if(((*root)->left)==0)&&(((*root)->right==0))
		{
			temp=(*root);
			(*root)->data=NULL;
			free(temp);
		}
		else if((((*root)->left)!=0)&&(((*root)-right)==0))
		{
			temp=(*root);
			while(temp)
			{
				pre=temp;
				temp=temp->left;
				pre->data=temp->data;
			}
				
		}
		else if((((*root)->left)==0)&&(((*root)-right)!=0))
}
//////////////
main()
{
	TREE *ptr=NULL,*root=NULL;
	char ch;
	int n;
	while(1)
	{
		printf("a:add\tp:print\ts:search\td:delete\te:exit\n");
			scanf(" %c",&ch);
		switch(ch)
		{
			case 'a':printf("enter data\n");
				scanf("%d",&n);
				add(&root,n);break;
			case 'p':print(root);break;
			case 's':printf("enter data to search\n");
				scanf("%d",&n);
				ptr=search(root,n); 
				if(ptr)
					printf("%u\n",ptr);
				else
					printf("data not found\n");
				break;
			case 'd':printf("enter data to delete\n");
				scanf("%d",&n);
				ptr=search(root,n);
				if(ptr)
					delete(&ptr,n);
				else
					printf("data not found\n");
				break;
			case 'e':return;
			default:printf("invalid option\n");break;
		}//switch
	}//while
}//main
	
