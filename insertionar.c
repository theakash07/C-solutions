//insertion in array at the end of the array
#include<stdio.h>
int main()
{
    int a[50],i,num,size;
    printf("Enter size:");
    scanf("%d",&size);
    for(i=0;i<=size;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter element:");
    scanf("%d",&num);
    size++;
    a[size]=num;
    for(i=0;i<=size;i++)
    {
        printf("%d",a[i]);
    }
    return 0;
}
