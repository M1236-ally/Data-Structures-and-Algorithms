//Insertion at specific position
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
    int pos;
    int i=1;
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



    printf("\n Enter the postion from which you need your data to be deleted: ");
    scanf("%d",&pos);

      temp=start;

    while(i<pos)
    {
        temp=temp->next;
        i++;
    }

   temp->prev->next=temp->next;
   temp->next->prev=temp->prev;
   free(temp);

      temp=start;
    while(temp!=NULL)
    {
        printf("%d",temp->data);
        printf(" ");
        temp=temp->next;
    }

    return 0;
  }
