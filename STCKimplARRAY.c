#include<stdio.h>
#include<stdlib.h>

#define N 5

int stack[N];
int top = -1;

void push()
{
    int x;
    if(top == N-1)
    {
        printf("Overflow condition: Stack is full.\n");
    }
    else
    {
        int option;
        while(1)
        {
            printf("Enter data: ");
    scanf("%d", &x);
        top++;
        stack[top] = x;
        
        printf("You want to continue[0,1]?");
        scanf("%d",&option);
        if(option==0)
        {
        break;
        }
        }
    }
}

void pop()
{
   int item;
   if(top == -1)
   { 
      printf("Underflow condition: Stack is empty.\n");
   }
   else
   {
       
      item = stack[top];
      top--;
      printf("Popped item: %d\n", item);
   }
}

void peek()
{
    int data;
    if(top == -1)
    {
        printf("Underflow condition: Stack is empty.\n");
    }
    else
    {
        data = stack[top];
        printf("Top item: %d\n", data);
    }
}

void display()
{
    int i;
    if(top == -1)
    {
        printf("Empty stack\n");
    }
    else
    {
        printf("Stack elements: ");
        for(i = top; i >= 0; i--)
        {
            printf("%d ", stack[i]);
        }
        printf("\n");
    }
}

void main()
{
    int choice;

    do
    {
        printf("\nChoose the operation you want to perform:\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Peek\n");
        printf("4. Display\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
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
            case 4:
                display();
                break;
            case 0:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice! Please enter a valid option.\n");
                break;
        }
    } while (choice != 0);
}

