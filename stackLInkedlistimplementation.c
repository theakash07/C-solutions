#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *link;
};
struct node *top = 0;
int choice;
int count = 0;
int i=0;

void push()
{
    struct node *newnode;
    while (1)
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        newnode->link = top;

        printf("Enter data:");
        scanf("%d", &newnode->data);

        top=newnode;

            i++;

        printf("You want to contiunue:[0,1]?");
        scanf("%d", &choice);

        if (choice == 0)
        {
            break;
        }
    }
}
void pop()
{
    struct node *temp=top;
    if(top==0)
    {
        printf("underflow condition");
    }
    else
    {
        printf("%d",top->data);
        top=top->link;
        free(temp);
        i--;
    }
}
void display()
    {
        if(top==NULL)
        {
            printf("Empty stack:");
        }
        else
        {
             struct node *current= top;
            printf("stack element :\n");
            while(current!=NULL)
            {
            printf("%d---%p\n",current->data,(void*)current->link);
            current=current->link;
            }

        }
    }

    void peek()
    {
        if(top==0)
        {
            printf("Empty nOde:");
        }
        else
        {
            printf("%d---%p",top->data,(void*)top->link);
        }
    }
int main()
{
    int option;

   do
   {
    printf("ENter option:\n1.push\n2.pop\n3.peek\n4.display\n");
    scanf("%d",&option);

    switch(option)
    {
     case 1:
            push();
            break;
     case 2: 
            pop();
            break;
     case 3: 
            peek();
            break;

     case 4: display();
             break;

     case 0: printf("Exiting...");
             break;

     default: printf("Enter valid ");
             break;
    }
   }while(option!=0);

   return 0;
}
