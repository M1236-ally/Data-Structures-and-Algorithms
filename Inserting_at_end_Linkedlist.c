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
    int choice=1;
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
    printf("\nEnter data you want to add at end");
    scanf("%d",&newnode->data);
      newnode->next=NULL;
     if(start==NULL)
     {
        start=newnode;
        temp=newnode;
     }
     else
     {
    temp=start;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
     temp->next=newnode;
    }
   
    temp=start;
    printf("Linked List after adding data at the end: ");
    while(temp!=NULL)
    {
        printf("%d",temp->data);
        printf(" ");
        temp=temp->next;
    }
}