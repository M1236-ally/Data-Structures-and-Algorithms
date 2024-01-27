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
    int ser;
    int flag=0;
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
     
    
    printf("\nEnter the element you want to search: ");
    scanf("%d",&ser);

     temp=start;
     while(temp!=NULL)
     {
        if(temp->data==ser)
        {
            printf("Element found in linked list");
            flag=1;
            break;
        }
        temp=temp->next;
     }

     if(flag==0)
     {
        printf("Element not found in the linked list");
     }
   

     return 0;
}
