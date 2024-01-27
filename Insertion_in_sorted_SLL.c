#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};

  

  main()
  {
    struct node *newnode;
    struct node*temp=NULL;
    struct node* start=NULL;
     struct node* prev=NULL;
    int choice=1;
    int t;
    int i=1;
    while(choice==1)
   {
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("Enter data");
    scanf("%d",&newnode->data);
      newnode->next=NULL;
      if(start==NULL)
      {
        start=newnode;
        temp=start;
      }
      else
      {
          temp->next=newnode;
          temp=newnode;
      }

       printf("Do you want to enter more nodes: 1/0");
       scanf("%d",&choice);
   }


    //Printing a linked list
    temp=start;
    while(temp!=NULL)
    {
        printf("%d",temp->data);
        printf(" ");
        temp=temp->next;
    }

    
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("\nEnter data you want to add");
    scanf("%d",&newnode->data);
      newnode->next=NULL;

  
     temp=start;
    while(newnode->data>temp->data)
    {
      	prev=temp;
        temp=temp->next;
    }

     newnode->next=prev->next;
     prev->next=newnode;

    temp=start;
    printf("Linked List after adding data in sorted list: ");
    while(temp!=NULL)
    {
        printf("%d",temp->data);
        printf(" ");
        temp=temp->next;
    }

  }
