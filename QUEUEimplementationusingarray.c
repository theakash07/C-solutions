#include <stdio.h>
#include <stdlib.h>

#define N 5

int queue[N];
int front = -1;
int rear = -1;
int data;
int choice;

void enqueue()
{
    while (1)
    {
        printf("Enter data: ");
        scanf("%d", &data);

        if (front == -1 && rear == -1)
        {
            front = rear = 0;
            queue[rear] = data;
        }
        else if (rear == N - 1)
        {
            printf("Overflow condition: Queue is full.\n");
            break;
        }
        else
        {
            rear++;
            queue[rear] = data;
        }

        printf("Do you want to continue? [0/1]: ");
        scanf("%d", &choice);

        if (choice == 0)
        {
            break;
        }
    }
}

void dequeue()
{
    if (front == -1 && rear == -1)
    {
        printf("Underflow condition: Queue is empty.\n");
    }
    else if (front == rear)
    {
        printf("%d\n", queue[front]);
        front = rear = -1;
    }
    else
    {
        printf("%d\n", queue[front]);
        front++;
    }
}

void peek()
{
    if (front == -1 && rear == -1)
    {
        printf("Empty queue.\n");
    }
    else
    {
        printf("%d\n", queue[front]);
    }
}

void display()
{
    if (front == -1 && rear == -1)
    {
        printf("Queue is empty.\n");
    }
    else
    {
        int i;
        printf("Queue elements: ");
        for (i = front; i <= rear; i++)
        {
            printf("%d ", queue[i]);
        }
        printf("\n");
    }
}

int main()
{
    int option;
    do
    {
        printf("Enter your choice\n1. Inserting\n2. Deleting\n3. Peek\n4. Display\n0. Exit\n");
        scanf("%d", &option);
        switch (option)
        {
        case 1:
            enqueue();
            break;
        case 2:
            dequeue();
            break;
        case 3:
            peek();
            break;
        case 4:
            display();
            break;
        case 0:
            printf("Exiting....\n");
            break;
        default:
            printf("Enter a valid option.\n");
            break;
        }
    } while (option != 0);

    return 0;
}
