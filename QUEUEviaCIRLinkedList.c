#include <stdio.h>
#include <stdlib.h>

// Define the structure for a node in the queue
struct node
{
    int data;
    struct node *next;
};

struct node *front = NULL;
struct node *rear = NULL;
int choice, count = 0;

// Function to insert an element into the queue
void enqueue()
{
    struct node *newnode;
    while (1)
    {
        // Create a new node
        newnode = (struct node *)malloc(sizeof(struct node));
        newnode->next = NULL;

        printf("Enter data: ");
        scanf("%d", &newnode->data);

        // Check if the queue is empty
        if (front == NULL && rear == NULL)
        {
            // Set the front and rear to the new node
            front = rear = newnode;
            rear->next = newnode;
        }
        else
        {
            // Add the new node at the end of the queue
            rear->next = newnode;
            rear = newnode;
            rear->next = front;
        }

        printf("Do you want to continue? [0/1]: ");
        scanf("%d", &choice);
        if (choice == 0)
        {
            break;
        }
    }
}

// Function to delete an element from the queue
void dequeue()
{
    struct node *temp = front;
    if (front == NULL && rear == NULL)
    {
        printf("Empty queue.\n");
    }
    else if (front == rear)
    {
        // Only one element in the queue
        front = rear = NULL;
        free(temp);
    }
    else
    {
        // Remove the front node and update the front pointer
        front = front->next;
        rear->next = front;
        free(temp);
    }
}

// Function to retrieve the front element of the queue without deleting it
void peek()
{
    if (front == NULL && rear == NULL)
    {
        printf("Empty queue.\n");
    }
    else
    {
        printf("Front element: %d\n", front->data);
    }
}

// Function to display the elements of the queue
void display()
{
    struct node *temp = front;
    if (front == NULL && rear == NULL)
    {
        printf("Empty queue.\n");
    }
    else
    {
        printf("Queue elements: ");
        while (temp->next != front)
        {
            printf("%d ", temp->data);
            temp = temp->next;
        }
        printf("%d\n", temp->data);
    }
}

int main()
{
    int option;
    do
    {
        printf("Enter option:\n1. Insert\n2. Delete\n3. Peek\n4. Display\n0. Exit\n");
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
            printf("Exiting...\n");
            break;
        default:
            printf("Enter valid option!\n");
            break;
        }
    } while (option != 0);

    return 0;
}
