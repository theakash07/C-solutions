#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *prev;
    struct node *next;
};
struct node *head=NULL;
struct node *tail=NULL;
int choice,count=0;
struct node *newnode=NULL;

void create()
{
    while(1)
    {
     newnode=(struct node*)malloc(sizeof(struct node));
     newnode->next=NULL;
     newnode->prev=NULL;

     printf("Enter data:");
     scanf("%d",&newnode->data);

     if(head==NULL)
     {
        head=tail=newnode;
        tail->next=newnode;
        tail->prev=newnode;
     }
     else
     {
        tail->next=newnode;
        newnode->prev=tail;
        newnode->next=head;
        head->prev=newnode;
        tail=newnode;
     }
     printf("You want to Continue:[0,1]?");
     scanf("%d",&choice);

     if(choice==0)
     {
        break;
     }
}
}
void beg()
{
   newnode=(struct node*)malloc(sizeof(struct node));
   printf("Enter data:");
   scanf("%d",&newnode->data);

   newnode->next=NULL;
   newnode->prev=NULL;


   if(head==0)
   {
       head=tail=newnode;
       newnode->next=tail;
       newnode->prev=head;
   }
   else
   {
    newnode->next=head;
    newnode->prev=tail;
    head->prev=newnode;
    tail->next=newnode;
    head=newnode;
   }
}
void display()
{
    struct node *temp=head;
    if(temp==0)
    {
        printf("Empty Node");
    }
    else
    {
        do
        {
          printf("%p---%d---%p\n",(void*)temp->prev,temp->data,(void*)temp->next);
          temp=temp->next;
          count++;
        } while (temp!=tail);
        
    }
    printf("The count is %d",count);
}
int main()
{
    create();
    beg();
    display();
    return 0;
}
