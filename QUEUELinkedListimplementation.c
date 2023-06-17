#include<stdio.h>
#include<stdlib.h>

struct node 
{
    int data;
    struct node *next;
};

int choice;
struct node *front = NULL;
struct node *rear = NULL;

void enqueue()
{
    struct node *newnode;
    while (1)
    {
        newnode = (struct node*)malloc(sizeof(struct node));
        newnode->next = NULL;

        printf("Enter data: ");
        scanf("%d", &newnode->data);

        if (front == NULL && rear == NULL)
        {
            front = rear = newnode;
        }
        else
        {
            rear->next = newnode;
            rear = newnode;
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
    struct node *temp = front;
    if (temp == NULL)
    {
        printf("Underflow condition: Queue is empty.\n");
    }
    else
    {
        printf("Dequeued element: %d\n", front->data);
        front = front->next;
        free(temp);
    }
}

void peek()
{
    if (front == NULL && rear == NULL)
    {
        printf("Empty queue.\n");
    }
    else
    {
        printf("%d\n", front->data);
    }
}

void display()
{
    struct node *temp = front;
    if (temp == NULL)
    {
        printf("Empty queue.\n");
    }
    else
    {
        printf("Queue elements: ");
        while (temp != NULL)
        {
            printf("%d ", temp->data);
            temp = temp->next;
        }
        printf("\n");
    }
}

int main()
{
    int option;
    do
    {
        printf("Enter option:\n1. Insert\n2. Delete\n3. Display\n4. Peek\n0. Exit\n");
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
                display();
                break;
            case 4:
                peek();
                break;
            case 0:
                printf("Exiting...\n");
                break;
            default:
                printf("Enter a valid option.\n");
                break;
        }
    } while (option != 0);

    return 0;
}
