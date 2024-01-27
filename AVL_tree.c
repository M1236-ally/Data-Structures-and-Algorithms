#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


struct node {
  int data;
  struct node* left;
  struct node* right;
  int height;
};

typedef struct node Node;

Node* root = NULL;


int getHeight(Node* n){
  if(n ==NULL) return 0;
  return n->height;
}


Node* createNode(int data){
  Node* newNode = (Node*) malloc(sizeof(Node));
  newNode->data  =data;
  newNode->left = NULL;
  newNode->right = NULL;
  newNode->height = 1;
}
int max(int a ,int b){
  return a> b ? a:b;
}

int getBf(Node* n){
  if (n==NULL) return 0;
  return (getHeight(n->left) - getHeight(n->right));
}

Node* inOrderPredecessor(Node* root) {
    root = root->left;
    while (root->right != NULL) {
        root = root->right;
    }
    return root; 
}

/*-------defining  function for rotations---------*/

Node* llRotation(Node* root){
  Node* a = root;
  Node* b = a->left;
  Node* br = b->right;
  
  b->right = a;
  a->left = br;
  
  return b;	
}

Node* rrRotation(Node* root){
  Node* a = root;
  Node* b = a->right;
  Node* bl = b->left;
  
  b->left = a;
  a->right = bl;
  
  return b;	
}

Node* lrRotation(Node* root){
  Node* a = root;
  Node* b = a->left;
  Node* c = b->right;
  Node* cl = c->left;
  Node* cr = c->right;
  
  c->left = b;
  c->right= a;
  b->right= cl;
  a->left = cr;
  
  return c;
}
Node* rlRotation(Node* root){
  Node* a = root;
  Node* b = a->right;
  Node* c = b->left;
  Node* cl = c->left;
  Node* cr = c->right;
  
  c->left = a;
  c->right= b;
  a->right = cr;
  b->left= cl;
  
  return c;
}

/*------End of rotation functions------------*/

Node* insertNode(Node** root, int data) {
  
  
    Node* node = *root; // dereferencing the double pointer 
    if (node == NULL) {
        node = createNode(data);
        *root = node;  
        return node;
    }
  else if (data > node->data) {
        node->right = insertNode(&(node->right), data);  
    }
  else if (data < node->data) {
        node->left = insertNode(&(node->left), data);  
    }
  else {
        printf("\nData already present in the tree.");
        return node;
    }

    node->height = 1 + max(getHeight(node->right), getHeight(node->left));

    int bf = getBf(node);

  //case for left Imbalance
  if(bf < -1){
    //LL Imbalance
    if(data < node->left->data){
      return llRotation(node);	
    }
    //LR Imbalance
    else{
      return lrRotation(node);
    }
  }
  //case for rigth imbalance
  if(bf > 1){
    //RR Imbalance
    if(data > node->right->data){
      return rrRotation(node);
    }
    //RL Imbalance
    else{
      return rlRotation(node);	
    }	
  }

    return node;
}

void Insert() {
    int data;
    printf("\nEnter the data you want to add: ");
    scanf("%d", &data);
    root = insertNode(&root, data);
}


void search (){
  int data;
  printf("Enter the data you want to search : ");
  scanf("%d" , &data);
  Node* temp = root;
  
  while(temp !=  NULL){
    
    if(temp-> data == data){
      printf("Data is Present!");
      return ;
    }
    else if(temp->data < data){
      temp = temp->right;
    }
    else {
      temp = temp->left;
    }
  }
  printf("Data is not present");	
}





Node* deleteNode(Node** root,int data) {
  Node* node = *root;
  
    if (node == NULL) {
        return node;
    }
    else if (data < node->data) {
        node->left = deleteNode(&(node->left), data);
    }
    else if (data > node->data) {
        node->right = deleteNode(&(node->right), data);
    }
    else {
        if (node->left == NULL) {
            Node* temp = node->right;
            free(node);
            return temp;
        }
        else if (node->right == NULL) {
            Node* temp = node->left;
            free(node);
            return temp;
        }
        Node* inOrderPred = inOrderPredecessor(node->left);
        node->data = inOrderPred->data;
        node->left = deleteNode(&(node->left), inOrderPred->data);
    }

    node->height = 1 + max(getHeight(node->right), getHeight(node->left));

    int bf = getBf(node);

  //case for left Imbalance
  if(bf < -1){
    //LL Imbalance
    if(data < node->left->data){
      return llRotation(node);	
    }
    //LR Imbalance
    else{
      return lrRotation(node);
    }
  }
  //case for rigth imbalance
  if(bf > 1){
    //RR Imbalance
    if(data > node->right->data){
      return rrRotation(node);
    }
    //RL Imbalance
    else{
      return rlRotation(node);	
    }	
  }

    return node;
}


void Delete(){
  
  int data;
  printf("Enter the data you want to delete:");
  scanf("%d" , &data);	
  root = deleteNode(&root,data);
  
}


void inOrder(Node* root){
  if(root == NULL){
    return;	
  }	
  inOrder(root->left);
  printf("%d " , root->data);
  inOrder(root->right);
}

int main(){

  bool flag;
  flag = true;
  int choice =1;
  while(flag){
    
    switch (choice){
      case 1:
        Insert();
        break;
        
      case 2:
        search();
        break;
      case 3:
        Delete();
        break;
      case 4:
        inOrder(root);
        break;
      case 5:
        flag  = false;
        break;
      default:
        printf("Please enter a valid choice");
        break;
    }
    
    if(flag){
      printf("\nPlease Enter you choice :\n ");
      printf("\n1.Insert\n2.Search\n3.Delete\n4.Print Tree\n5 Exit\n");
      printf("Your choice : ");
      scanf("%d" , &choice);
    }
  }
  return 0;
}

