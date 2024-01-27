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
     struct node* one=NULL; 
    int choice=1;
    int pos;
    int i=1;
    while(choice)
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


    printf("\nEnter the position from which you want to delete data ");
    scanf("%d",&pos);
     temp=start;
    while(i<pos-1)
    {
        temp=temp->next;
        i++;
    }

    one=temp->next;
    temp->next=one->next;
    free(one);
    
    printf("\nLinked List after deleting data from a specific position: ");
    temp=start;
    while(temp!=NULL)
    {
        printf("%d",temp->data);
        printf(" ");
        temp=temp->next;
    }

  }
