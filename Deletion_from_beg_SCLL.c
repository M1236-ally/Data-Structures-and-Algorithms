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
   
      temp=tail->next;
      tail->next=temp->next;
      free(temp);
    
    
    printf("\nLinked list after deletion from beginning ");
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
