#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
    struct node *prev;
};
struct node *head=NULL;
struct node *tail=NULL;
int choice,count =0,i=1,len=0;
int position;

void create()
{
    while(1)
    {
        struct node *newnode;
        newnode=(struct node*)malloc(sizeof(struct node));

        newnode->next=NULL;
        newnode->prev=NULL;

        printf("Enter data:");
        scanf("%d",&newnode->data);

        if(head==NULL)
        {
            head=tail=newnode;
            head->next=newnode;
            head->prev=newnode;
        }
        else
        {
            tail->next=newnode;
            newnode->prev=tail;
            newnode->next=head;
            head->prev=newnode;
            tail=newnode;
            len++;
        }
        printf("You wanna continue[0,1]?");
        scanf("%d",&choice);

        if(choice==0)
        {
            break;
        }

    }
}
void pos()
{
    printf("Enter the position:");
    scanf("%d",&position);

    struct node *newnode,*temp=head;

    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->next=NULL;
    newnode->prev=NULL;
    
    printf("Enter data:");
    scanf("%d",&newnode->data);
    
    if(position<0 || position>len)
    {
        printf("ENter valid pOsition");
    }
    else if(position==1)
    {
         beg();
    }
    else
    {
        while(i<position-1)
        {
           temp=temp->next;
            i++;
        }
        newnode->prev=temp;
        newnode->next=temp->next;
        temp->next->prev=newnode;
        temp->next=newnode;
        temp=newnode;
    }


}
void beg()
{
    struct node *newnode;
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
    struct node *current=head;
    if(current==0)
    {
        printf("Empty Node");
    }
    else
    {
        do
        {
            printf("%p---%d---%p\n",(void*)current->prev,current->data,(void*)current->next);
            current=current->next;
            count++;
        } while (current!=tail);
        
    }
    printf("The count is %d",count);

}
int main()
{
    create();
    pos();
    display();
    return 7;
}
