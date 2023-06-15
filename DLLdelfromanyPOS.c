//delete from any position in the linked list
#include<stdio.h>
#include<stdlib.h>

struct node 

{
    int data;
    struct node *next;
    struct node *prev;
};
struct node *head=NULL;
struct node *temp=NULL;
struct node *newnode=NULL;
int choice,count=0;
int i=1,pos;

void create()
{
    while(1)
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        newnode->next=NULL;
        newnode->prev=NULL;

        printf("ENTER Data:");
        scanf("%d",&newnode->data);

        if(head==NULL)
        {
            head=temp=newnode;
        }
        else
        {
            temp->next=newnode;
            newnode->prev=temp;
            temp=newnode;
        }
        printf("YOU Want to continue[0,1]");
        scanf("%d",&choice);
        if(choice==0)
        {
            break;
        }
    }
}
void delpos()
{
     printf("ENte the position you want to delete:");
     scanf("%d",&pos);

     temp=head;
    while(i<pos)
    {
        temp=temp->next;
        i++;
    }
    temp->prev->next=temp->next;
    temp->next->prev=temp->prev;
    free(temp);
}
void display() {
    temp = head;
    while (temp != NULL) {
        printf("%p ---- %d ---- %p\n", (void*)temp->prev, temp->data, (void*)temp->next);
        temp = temp->next;
        count++;
    }
    printf("The count is: %d\n", count);
}
int main()
{
    create();
    delpos();
    display();
    return 0;
}
