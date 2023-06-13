//deletion of element of array at the end
#include<stdio.h>
#include<string.h>
int main()
{
    int a[50],size,i;
    puts("Enter size of array");
    scanf("%d",&size);

    //taking input in array
    for(i=1;i<=size;i++)
    {
        scanf("%d",&a[i]);
    }
    //deleting element from the postition end
    for(i=1;i<=size-1;i++)
    {
        printf("%d",a[i]);
        printf("\n");
    }
    size--;
    //update array :
     for(i=1;i<=size;i++)
    {
        printf("%d",a[i]);
        printf("\n");
    }
    return 0;

}
