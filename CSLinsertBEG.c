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

void create()
{
    tail = NULL;
    while (1)
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        newnode->next = NULL;

        printf("Enter data: ");
        scanf("%d", &(newnode->data));

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
        }

        printf("Do you want to continue (0/1)? ");
        scanf("%d", &choice);

        if (choice == 0)
        {
            break;
        }
    }
}

void BEG()
{
    newnode = (struct node *)malloc(sizeof(struct node));
    newnode->next = NULL;

    printf("Enter data: ");
    scanf("%d", &(newnode->data));
    printf("\n%p\n",newnode);

    if (tail == NULL)
    {
        tail = newnode;
        tail->next = newnode;
    }
    else
    {
        newnode->next = tail->next;
        tail->next = newnode;
    }
}

void display()
{
    if (tail == NULL)
    {
        printf("Empty Node\n");
    }
    else
    {
        struct node *current = tail->next;
        count = 0;

        do
        {
            printf("%d---%p\n", current->data, (void *)current->next);
            count++;
            current = current->next;
        } while (current != tail->next);
    }
    printf("The count is: %d\n", count);
}

int main()
{
    create();
    BEG();
    display();
    return 0;
}
