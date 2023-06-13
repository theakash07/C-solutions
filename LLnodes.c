//here you can put num  of nodes you want
#include<stdio.h>
#include<stdlib.h>
#include<string.h>


// //making user defined data type of node intializing
    
struct node
    {
        int data;
        struct node* next;
    };
void main()
{
   

    struct node *head, *newnode, *temp;
    head=0;
    int count=0;
    int choice;

   while(1)
   {
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->next=0;
    printf("\nEnter data: ");
    scanf("%d", &newnode->data);

    
    if(head==0)
    {
        head=temp=newnode;
    }
    else
    {
           temp->next=newnode;
           temp=newnode; 
    }
   puts("\nYou want to continue[0,1]?");
   scanf("%d",&choice);
        if(choice==0)
        {
        break;
        }    
  }
  printf("\nThank you for using.\n");

   temp=head;
   while(temp!=NULL)
   {
    printf("\n%d %5p",temp->data,(void*)temp->next);
    temp=temp->next;
    count++;
   }
    printf("\nNumber of Nodes: %d\n", count);

}
