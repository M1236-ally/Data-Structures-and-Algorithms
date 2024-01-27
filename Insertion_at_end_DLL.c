//Insertion at end
#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *prev;
    struct node *next;
};


  main()
  {
    struct node *newnode;
    struct node *temp=NULL;
    struct node *start=NULL;
    int choice=1;
    while(choice)
   {
     newnode=(struct node*)malloc(sizeof(struct node));
     printf("Enter data");
     scanf("%d",&newnode->data);
     newnode->prev=NULL;
     newnode->next=NULL;

      if(start==NULL)
      {
        start=newnode;
        temp=newnode;
      }
      else
      {
        temp->next=newnode;
        newnode->prev=temp;
        temp=newnode;
      }
      printf("Do you want to enter more nodes: 1/0");
       scanf("%d",&choice);
   }

    newnode=(struct node*)malloc(sizeof(struct node));
    printf("\nEnter data you want to add at last");
    scanf("%d",&newnode->data);
      newnode->prev=NULL;
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
        newnode->prev=temp;
        // temp=newnode;
    }

     temp=start;
    while(temp!=NULL)
    {
        printf("%d",temp->data);
        printf(" ");
        temp=temp->next;
    }
  return 0;
  }