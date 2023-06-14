//inserting node at the beggining of the ndoe
#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node* prev;
    struct node* next;
};

struct node* head = NULL;
struct node* temp = NULL;
struct node* newnode = NULL;
int choice;
int count = 0;

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
}

void beg() {
    struct node* newnode;
    newnode = (struct node*)malloc(sizeof(struct node));
    newnode->prev = NULL;
    printf("Enter data: ");
    scanf("%d", &newnode->data);

    head->prev = newnode;
    newnode->next = head;
    head = newnode;
}
void display()
{
    temp=head;
    while(temp!=0)
    {
        printf("%p ---- %d ---- %p",(void*)temp->prev,temp->data,(void*)temp->next);
        count++;
        temp=temp->next;
        
    }
}
int main() {
    create();
    beg();
    display();
    return 0;
}
