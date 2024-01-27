#include<stdio.h>
#include<stdlib.h>
struct TreeNode{
	int data;
	struct TreeNode *left;
	struct TreeNode *right;
};

struct TreeNode *createnode(int x)
{
	struct TreeNode *newnode=NULL;
	newnode=(struct TreeNode*)malloc(sizeof(struct TreeNode));
	newnode->data=x;
	newnode->left=NULL;
	newnode->right=NULL;
	return newnode;
}

void preorder(struct TreeNode *root)
{
	if(root==NULL)
	{
		return;
	}
	printf("%d",root->data);
	preorder(root->left);
	preorder(root->right);
}


void inorder(struct TreeNode *root)
{
	if(root==NULL)
	{
		return;
	}
	inorder(root->left);
	printf("%d",root->data);
	inorder(root->right);
}

void postorder(struct TreeNode *root)
{
	if(root==NULL)
	{
		return;
	}
	postorder(root->left);
	postorder(root->right);
	printf("%d",root->data);
}


main()
{
	struct TreeNode *root=createnode(10);
	root->left = createnode(20);
    root->right = createnode(30);
    root->left->left = createnode(40);
    root->left->right = createnode(50);
	printf("Preorder Traversal:");
	preorder(root);
	
	printf("\n Inorder Traversal: ");
	inorder(root);
	
	printf("\n Postorder Traversal: ");
	postorder(root);
	
	
}
