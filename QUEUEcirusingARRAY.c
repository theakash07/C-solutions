#include<stdio.h>
#include<stdlib.h>

#define N 5

int queue[N];
int front = -1;
int rear = -1;

void enqueue()
{
    int data;
    int choice;
    while(1)
    {
        printf("Enter data: ");
        scanf("%d", &data);

        if(front == -1 && rear == -1)  // If the queue is empty
        {
            front = rear = 0;
            queue[rear] = data;
        }
        else if((rear + 1) % N == front)  // If the queue is full
        {
            printf("Queue is Full.\n");
        }
        else
        {
            rear = (rear + 1) % N;  // Move rear circularly
            queue[rear] = data;
        }
        printf("Do you want to continue? [0/1]: ");
        scanf("%d", &choice);
        if(choice == 0)
        {
            break;
        }
    }
}

void dequeue()
{
    if(front == -1 && rear == -1)  // If the queue is empty
    {
        printf("Underflow condition: Queue is empty.\n");
    }
    else if(front == rear)  // If there is only one element in the queue
    {
        printf("%d\n", queue[front]);
        front = rear = -1;
    }
    else
    {
        printf("%d\n", queue[front]);
        front = (front + 1) % N;  // Move front circularly
    }
}

void display()
{
    int i = front;
    if(front == -1 && rear == -1)  // If the queue is empty
    {
        printf("The queue is empty.\n");
    }
    else
    {
        printf("Queue is: ");
        while(i != rear)  // Traverse the queue
        {
            printf("%d ", queue[i]);
            i = (i + 1) % N;  // Move i circularly
        }
        printf("%d\n", queue[rear]);  // Print the last element
    }
}

int main()
{
    int option;
    do
    {
        printf("Enter option:\n1. Enqueue\n2. Dequeue\n3. Display\n0. Exit\n");
        scanf("%d", &option);

        switch(option)
        {
            case 1:
                enqueue();
                break;
            case 2:
                dequeue();
                break;
            case 3:
                display();
                break;
            case 0:
                printf("Exiting...\n");
                break;
            default:
                printf("Enter valid option!\n");
                break;
        }
    } while(option != 0);

    return 0;
}
