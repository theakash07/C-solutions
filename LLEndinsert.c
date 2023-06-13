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
    struct node *head, *tempr,*newnode;
    head=0;
    int count=0;
    int choice;
    int element;
    while(1)
    {
    //program for dynamically memory allocaiton 
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->next=0;
    puts("enter the data");
    scanf("%d",&newnode->data);

       if(head==NULL)
       {
        head=tempr=newnode;
       }
       else{
        tempr->next=newnode;
        tempr=newnode;

       }
       printf("YOu want to continue[0,1]?");
       scanf("%d",&choice);
       if(choice==0)
       {
        break;
       }

    }
    
    printf("Enter data you want to Input");
    newnode=(struct node*)malloc(sizeof(struct node));
    scanf("%d",&newnode->data);
    tempr=head;
    while (tempr->next!=0)
    {
        tempr=tempr->next;

    }
    tempr->next=newnode;

    tempr=head;
    while(tempr!=NULL)
    {
        printf("%d  %5p",tempr->data, (void*)tempr->next);
        count++;
        tempr=tempr->next;
        printf("\n");
    }
    printf("The count is : %d",count);
    
    
}
