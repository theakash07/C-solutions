#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};
struct node *tail=NULL;
struct node *prev=NULL;
struct node *nextnode=NULL;
struct node *temp;
int choice;
void create()
{
    tail=NULL;
    while(1)
    {
        struct node *newnode;
        newnode=(struct node*)malloc(sizeof(struct node));
        newnode->next=NULL;

        printf("Enter data");
        scanf("%d",&newnode->data);

        if(tail==NULL)
        {
            tail=newnode;
            temp=tail;
        }
        else
        {
           temp->next=newnode;
           temp=newnode;
        }
        printf("You want to continue:[0,1]?");
        scanf("%d",&choice);

         if(choice==0)
         {
            break;
         }
    }
}
void rev()
{
    struct node *current;
    current=tail;
    prev=tail;

    nextnode=tail->next;
    current->next=0;
    
    
        while(current!=temp)
        {
        current=nextnode;
           nextnode=current->next;
           current->next=prev;
           prev=current;
    }

    tail=current;
    
}
void display()
{
    int count=0;

    temp=tail;
    

    {
        do
        {
            printf("%d---%p\n",temp->data,(void*)temp->next);
            temp=temp->next;
        } while (temp!=0);
        
    }
}
int main()
{
    create();
    rev();
    display();
    return 0;
}
