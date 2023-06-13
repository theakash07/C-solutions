#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct node
{
    int data;
    struct node* next;
};
void main()
{
    int choice;
    struct node *head,*temp,*newnode;
    int count=0;
    int position;
    int i;
    //Intialising nodes 
    while(1)
{
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->next=0;
    printf("Enter element");
    scanf("%d",&newnode->data);//taking data in nodes

    if(head==NULL)
    {
        head=temp=newnode;
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
printf("AT what position you want NEW NODE:");
    scanf("%d",&position);
temp=head;
  if(i<position)
{
    while(temp==head)
    {
        temp=temp->next;
    }
    printf("\n%d",temp->data);
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("ENTEr Data");
    scanf("%d",&newnode->data);
    newnode->next=temp->next;
    temp->next=newnode;
}
temp=head;
while(temp!=NULL)
{
    printf("%d  %5p",temp->data,(void*)temp->next);
    temp=temp->next;
    count++;
}
printf("The count : %d",count);


}
