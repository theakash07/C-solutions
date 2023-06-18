#include<stdio.h>
#include<stdlib.h>

struct node 
{
    int data;
    struct node *left,*right;
};
struct node *create()
{
    struct node *newnode;
    int x;
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("Enter data:");
    scanf("%d",&x);

    if(x==-1)
    {
        free(newnode);
        return NULL;
    }
    else
    {
        newnode->data=x;
        printf("Enter Left child %d",x);
        newnode->left=create();
        printf("Enter right child: %d",x);
        newnode->right=create();
        return newnode;
    }
}

void main()
{
    struct node *root;
    root=create();

}
