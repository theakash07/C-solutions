#include<stdio.h>
#include<stdlib.h>


int insertarray()
{
    int size;
    puts("Enter array Size: ");
    scanf("%d",&size);
    return size;
}

void createArray(int size, int arr[])
{
    for(int i = 0; i < size; i++)
    {
        printf("Enter Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
}

void printArray(int size, int arr[])
{
    printf("Elements in the array: ");
    for(int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}


int main()
{
    int len;
    len = insertarray();

    int a[len];

    createArray(len, a);
    printArray(len, a);

    return 0;
}
