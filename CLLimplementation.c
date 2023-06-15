#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
    struct node *prev;
};

struct node *head = NULL;
struct node *temp = NULL;
struct node *newnode = NULL;
int count = 0, choice;

void create() {
    head = NULL;
    while (1) {
        newnode = (struct node*)malloc(sizeof(struct node));
        newnode->prev = NULL;
        newnode->next = NULL;

        printf("Enter data: ");
        scanf("%d", &newnode->data);

        if (head == NULL) {
            head = temp = newnode;
        }
        else {
            temp->next = newnode;
            newnode->prev = temp;
            temp = newnode;
        }
        
        printf("Do you want to continue [0, 1]? ");
        scanf("%d", &choice);
        if (choice == 0) {
            break;
        }
    }
    
    if (head != NULL) {
        head->prev = temp;
        temp->next = head;
    }
}

void display() {
    temp = head;
    count = 0;
    if (temp == NULL) {
        printf("List is empty.\n");
        return;
    }

    do {
        printf("%p ---- %d ---- %p\n", (void*)temp->prev, temp->data, (void*)temp->next);
        count++;
        temp = temp->next;
    } while (temp != head);

    printf("The count is: %d\n", count);
}

int main()
{
    create();
    display();
    return 0;
}
