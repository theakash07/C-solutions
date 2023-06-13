#include<stdio.h>
#include<string.h>
int main()
{
    int a[50],size,elemnet,pos,i;
    puts("Enter the size of element");
    scanf("%d",&size);
    for(i=1;i<=size;i++)
    {
        scanf("%d",&a[i]);
    }
    puts("Enter the position of element");
    scanf("%d",&pos);
    for(i=pos;i<=size-1;i++)
    {
        a[i]=a[i+1];
    }
    size--;
    for(i=1;i<=size;i++)
    {
        printf("%d",a[i]);
    }
    return 0;
}
