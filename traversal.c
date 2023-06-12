//this is traversal of array in data structure which means visiting each elements only ones .
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a[50],i,size;
    printf("Enter size of array:");
    scanf("%d",&size);
    for(i=0;i<=size;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<=size;i++)
    {
        printf("%d",a[i]);
    }

    return 0;

}
