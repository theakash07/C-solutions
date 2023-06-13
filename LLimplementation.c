//program of linked list implementation in C dsa 
//simple program of one node of linked list
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void main()
{
          struct node //node data and address user definced data type
          {
            int data;
            struct node* next;
          };
          struct node *head , *newnode, *temp;
          head =0;//head pointer node which contains the head node address
          int count=0;//counting the number of nodes 
            int choice;
          newnode =(struct node*)malloc(sizeof(struct node));//dynamically allocation the memory at run time
          // because malloc return the void pointer to its initalaised memeory 
          puts("Enter data");
          scanf("%d",&newnode->data);
          newnode->next=0;
          if(head==0)
          {
            head=temp=newnode; //giving base address to head and temp for future refenrece
          }
          else
          {
            temp->next=newnode;
            temp=newnode;
          }
          puts("do you want to contiue (0,1)?");
          scanf("%d",&choice);
         temp=head;
         while(temp==head)
         {
            printf("%d",temp->data);
            temp=temp->next;
            count++;
         }
}
