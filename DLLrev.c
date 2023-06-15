//doubly linked list reverse code
#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
    struct node *prev;
};

struct node *head = NULL;
struct node *tail = NULL;
struct node *newnode = NULL;
int count = 0;
int choice;

void create()
{
    while (1)
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        newnode->next = NULL;
        newnode->prev = NULL;

        printf("Enter data: ");
        scanf("%d", &(newnode->data));

        if (head == NULL)
        {
            head = tail = newnode;
        }
        else
        {
            tail->next = newnode;
            newnode->prev = tail;
            tail = newnode;
        }

        printf("Do you want to continue (1/0): ");
        scanf("%d", &choice);

        if (choice == 0)
        {
            break;
        }
    }
}

void rev()
{
    struct node *current, *nextnode;
    current = head;
    nextnode = NULL;

    while (current != NULL)
    {
        nextnode = current->next;
        current->next = current->prev;
        current->prev = nextnode;
        current = nextnode;
    }

    current = head;
    head = tail;
    tail = current;
}

void display()
{
    struct node *current = head;
    count = 0;

    while (current != NULL)
    {
        printf("%p ---- %d ---- %p\n", (void *)current->prev, current->data, (void *)current->next);
        current = current->next;
        count++;
    }

    printf("The count is: %d\n", count);
}

int main()
{
    create();
    rev();
    display();

    return 0;
}
