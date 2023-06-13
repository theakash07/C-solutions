//array insertion in c at any specific location wether it could be beginning end or between
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a[50],i,num,size,pos;
    printf("Enter size of array:");
    scanf("%d",&size);
    for(i=0;i<=size;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\n Enter element:");
    scanf("%d",&num);
    printf("\n Enter positon wherer you want to insert element");
    scanf("%d",&pos);
    for(i=size-1;i>=pos-1;i--)
    {
        a[i+1]=a[i];
    }

    a[pos-1]=num;
    size++;

    for(i=0;i<=size;i++)//traversal of array
    {
        printf("%d",a[i]);
        printf("\n");
    }
    return 0;
}
