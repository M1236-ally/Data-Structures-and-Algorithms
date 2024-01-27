#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};


  main()
  {
    struct node *newnode;
    struct node *tail=NULL;
    struct node* temp=NULL;
    int choice=1;
    int pos;
    int i=1;
    struct node *temp1=NULL;
    while(choice)
   {
     newnode=(struct node*)malloc(sizeof(struct node));
     printf("Enter data");
     scanf("%d",&newnode->data);
     newnode->next=NULL;

      if(tail==NULL)
      {
        tail=newnode;
        tail->next=newnode;
      }
      else
      {
       newnode->next=tail->next;
        tail->next=newnode;
        tail=newnode;
      }

       printf("Do you want to enter more nodes: 1/0");
       scanf("%d",&choice);
   }
   
     printf("Enter position: ");
     scanf("%d",&pos);
     
     temp=tail->next;
     while(i<pos-1)
     {
     	temp=temp->next;
     	i++;
	 }
    
     temp1=temp->next;
     temp->next=temp1->next;
     free(temp1);
    
    printf("\nLinked list after deletion a node from a specific position ");
     //Printing a linked list
    temp=tail->next;
    while(temp->next!=tail->next)
    {
        printf("%d",temp->data);
        printf(" ");
        temp=temp->next;
    }
    
    printf("%d",temp->data);
    
  return 0;
   }
