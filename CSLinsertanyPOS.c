#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *tail = NULL;
struct node *newnode;
int choice, count = 0;
int position;
int i = 0;

void create()
{
    tail = NULL;
    while (1)
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        newnode->next = NULL;

        printf("Enter data: ");
        scanf("%d", &newnode->data);

        if (tail == NULL)
        {
            tail = newnode;
            tail->next = newnode;
        }
        else
        {
            newnode->next = tail->next;
            tail->next = newnode;
            tail = newnode;
            count++;
        }

        printf("Do you want to continue (0/1)? ");
        scanf("%d", &choice);

        if (choice == 0)
        {
            break;
        }
    }
}

void Pos()
{
    newnode = (struct node *)malloc(sizeof(struct node));
    newnode->next = NULL;

    printf("Enter data: ");
    scanf("%d", &newnode->data);

    printf("Enter position: ");
    scanf("%d", &position);

    if (position < 0 || position > count)
    {
        printf("Invalid position\n");
        return;
    }

    if (tail == NULL)
    {
        tail->next = newnode;
        tail = newnode;
    }
    else
    {
        struct node *temp = tail->next;

        while (i < position - 1)
        {
            temp = temp->next;
            i++;
        }

        newnode->next = temp->next;
        temp->next = newnode;
    }
}

void display()
{
    struct node *current = tail->next;

    if (current == NULL)
    {
        printf("Empty linked list\n");
    }
    else
    {
        do
        {
            printf("%d---%p\n", current->data, (void *)current->next);
            current = current->next;
        } while (current != tail->next);
    }
}

int main()
{
    create();
    Pos();
    display();
    return 0;
}
