#include<stdio.h>
#include<stdlib.h>

struct node 
{
    int data;
    struct node *left, *right;
};
  

struct node *create()
{
    int x;
    struct node *newnode;
    newnode = (struct node*)malloc(sizeof(struct node));
  
    printf("Enter data:");
    scanf("%d", &x);
    if(x == -1)
    {
        free(newnode);
        return NULL;
    }
    else
    {
        newnode->data = x;
        printf("Enter left child of %d: ", x);
        newnode->left = create();
        printf("Enter right child of %d: ", x);
        newnode->right = create();
        return newnode;
    }
}

void preorder(struct node *root)
{
    if(root == NULL)
    {
        return;
    }
    else
    {
        printf("%d ", root->data);
        preorder(root->left);
        preorder(root->right);
    }
}

void inorder(struct node *root)
{
    if(root == NULL)
    {
        return;
    }
    else
    {
        inorder(root->left);
        printf("%d ", root->data);
        inorder(root->right);
    }
}

void postorder(struct node *root)
{
    if(root == NULL)
    { 
       return;
    }
    else
    {
        postorder(root->left);
        postorder(root->right);
        printf("%d ", root->data);
    }
}

int main()
{
    struct node *root;
    root = create();

    printf("The preorder traversal is:\n");
    preorder(root);

    printf("\nThe inorder traversal is:\n");
    inorder(root);

    printf("\nThe postorder traversal is:\n");
    postorder(root);

    return 0;
}
