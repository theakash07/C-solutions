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

void END() {
    struct node* newnode;
    newnode = (struct node*)malloc(sizeof(struct node));
    newnode->next = NULL;
    printf("Enter data: ");
    scanf("%d", &newnode->data);
    temp=head;
     if(temp!=0)
     {
         temp=temp->next;
     }
     temp->next=newnode;
     newnode->prev=temp;
     temp=newnode;
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
    END();
    display();
    return 0;
}
