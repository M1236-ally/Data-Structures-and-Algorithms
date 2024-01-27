#include <stdio.h>
#include <stdlib.h>


struct node {
    int data;
    struct node* left;
    struct node* right;
};


struct node* createnode(int data) {
    struct node* newnode = (struct node*)malloc(sizeof(struct node));
    if (newnode == NULL) {
        printf("Memory allocation failed!\n");
        exit(1);
    }
    newnode->data = data;
    newnode->left = NULL;
    newnode->right = NULL;
    return newnode;
}

// Function to insert a node
struct node* insertnode(struct node* root, int data) {
    if (root == NULL) {
        root = createnode(data);
    } else {
        if (data < root->data) {
            root->left = insertnode(root->left, data);
        } else {
            root->right = insertnode(root->right, data);
        }
    }
    return root;
}

// Function to traverse the tree in inorder
void inorderTraversal(struct node* root) {
    if (root != NULL) {
        inorderTraversal(root->left);
        printf("%d ", root->data);
        inorderTraversal(root->right);
    }
}

void postorderTraversal(struct node* root) 
{
	if(root!=NULL)
	{
    postorderTraversal(root->left);
    postorderTraversal(root->right);
    printf("%d ", root->data);
    }
}

void preorderTraversal(struct node* root) {
    if (root!=NULL) 
	{
    printf("%d ", root->data);
    preorderTraversal(root->left);
    preorderTraversal(root->right);
    }
}

struct node* findMinnode(struct node* node) {
    struct node* current = node;
    while (current && current->left != NULL) {
        current = current->left;
    }
    return current;
}

// Function to delete a node
struct node* deletenode(struct node* root, int data) {
    if (root==NULL)
	{
        return root;
    } 
	else if(data<root->data) 
	{
        root->left = deletenode(root->left, data);
    } 
	else if (data > root->data) 
	{
        root->right = deletenode(root->right, data);
    }
	else
	{
       
        if (root->left == NULL && root->right == NULL) 
		{
            //node has no child
            free(root);
            root = NULL;
        } 
		else if (root->left == NULL)
		{
            //node has only right child
            struct node* temp = root;
            root = root->right;
            free(temp);
        } 
		else if (root->right == NULL)
		{
            //node has only left child
            struct node* temp = root;
            root = root->left;
            free(temp);
        } 
		else 
		{
            struct node* minRight = findMinnode(root->right);
            root->data = minRight->data;
            root->right = deletenode(root->right, minRight->data);
        }
    }
    return root;
}

int main() {
    struct node* root = NULL;

    root = insertnode(root, 50);
    root = insertnode(root, 30);
    root = insertnode(root, 20);
    root = insertnode(root, 40);
    root = insertnode(root, 70);
    root = insertnode(root, 60);
    root = insertnode(root, 80);

    printf("Inorder traversal: ");
    inorderTraversal(root);
    printf("\n");

    printf("Postorder Traversal:");
    postorderTraversal(root);
    printf("\n");
    
    printf("Preorder Traversal:");
    preorderTraversal(root);
    printf("\n");
    
    printf("Delete from bst: ");
    deletenode(root,50);
    
    printf("Inorder traversal: ");
    inorderTraversal(root);
    printf("\n");
    return 0;
}
