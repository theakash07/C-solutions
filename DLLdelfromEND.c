#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
    struct node *prev;
};

struct node *head = NULL;
struct node *temp = NULL;
struct node *newnode = NULL;

int choice;
int count = 0;

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
            head = temp = newnode;
        }
        else
        {
            temp->next = newnode;
            newnode->prev = temp;
            temp = newnode;
        }

        printf("Do you want to continue (0/1)? ");
        scanf("%d", &choice);

        if (choice == 0)
        {
            break;
        }
    }
}

void delend()
{
    if (head != NULL)
    {
        temp = head;

        while (temp->next != NULL)
        {
            temp = temp->next;
        }

        if (temp->prev != NULL)
        {
            temp->prev->next = NULL;
        }
        else
        {
            head = NULL; // If only one node was present, update head as well
        }

        free(temp);
        printf("Node deleted from the end.\n");
    }
    else
    {
        printf("List is empty. Nothing to delete.\n");
    }
}

void display()
{
    temp = head;
    count = 0;

    while (temp != NULL)
    {
        printf("%p --- %d --- %p\n", (void *)temp->prev, temp->data, (void *)temp->next);
        temp = temp->next;
        count++;
    }

    printf("The count is: %d\n", count);
}

int main()
{
    create();
    delend();
    display();

    return 0;
}
