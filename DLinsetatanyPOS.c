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
int post,i=1;

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

void pos() {
    //struct node* newnode;
    printf("Enter position");
    scanf("%d",&post);
    
    temp=head;
    
    if(i<pos-1)
    {
        temp=temp->next;
        i++;
    }
    
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("enter data:");
    scanf("%d",&newnode->data);
    newnode->prev=temp;
    newnode->next=temp->next;
    temp->next=newnode;
    newnode=temp;
}
void display()
{
    temp=head;
    while(temp!=0)
    {
        printf("%p ---- %d ---- %p\n",(void*)temp->prev,temp->data,(void*)temp->next);
        count++;
        temp=temp->next;
        
    }
}
int main() {
    create();
    pos();
    display();
    return 0;
}
