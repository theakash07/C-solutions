#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *head;
struct node *tail;
struct node *newnode;
int choice,count=0;

void create()
{
    head=0;
      while(1)
      {
        newnode=(struct node*)malloc(sizeof(struct node));
        newnode->next=0;

        printf("Enter data:");
        scanf("%d",&newnode->data);

        if(head==0)
        {
            head=tail=newnode;
            tail->next=head;
        }
        else
        {
            newnode->next=tail;
            tail->next=newnode;
            tail=newnode;
        }
        printf("You want to continue:");
        scanf("%d",&choice);
        if(choice==0)
        {
            break;
        }
      }
}
void display()
{
    struct node *current=head;
    if(current==0)
    {
        printf("Empty node:");
    }
    else
    {
        do
        {
           printf("%d---%p\n",current->data,(void*)current->next);
           current=current->next;
           count++;
        } while (current!=tail);
        
    }
    printf("The count is:%d",count);
}
int main()
{
    create();
        display();
    return 0;
}
