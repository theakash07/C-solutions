#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* next;
};

int main() {
    struct node* head = NULL;
    struct node* temp = NULL;
    struct node* newnode = NULL;
    int count = 0;
    int choice;

    while (1) {
        newnode = (struct node*)malloc(sizeof(struct node));
        newnode->next = NULL;

        printf("Enter data: ");
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
    head = head->next;
    free(temp);

    temp = head;
    while (temp != NULL) {
        printf("%d %p\n", temp->data, (void*)temp->next);
        temp = temp->next;
        count++;
    }
}
