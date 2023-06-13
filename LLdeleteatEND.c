#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* next;
};

struct node* temp = NULL;
struct node* head = NULL;
struct node* newnode = NULL;
struct node* prenode = NULL;
int count;
int choice;

int main()
{
    while (1) {
        newnode = (struct node*)malloc(sizeof(struct node));
        newnode->next = NULL;

        printf("Enter the data: ");
        scanf("%d", &newnode->data);

        if (head == NULL) {
            head = temp = newnode;
        } else {
            temp->next = newnode;
            temp = newnode;
        }

        printf("Do you want to continue (0/1)? ");
        scanf("%d", &choice);

        if (choice == 0) {
            break;
        }
    }

    temp = head;
    while (temp->next != NULL) {
        prenode = temp;
        temp = temp->next;
    }

    if (temp == head) {
        head = NULL;
    } else {
        prenode->next = NULL;
        free(temp);
    }

    temp = head;
    count = 0;
    while (temp != NULL) {
        printf("%d %p\n", temp->data, (void*)temp->next);
        temp = temp->next;
        count++;
    }

    printf("The count is: %d\n", count);
}
