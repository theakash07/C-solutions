// This program calculates the sum of all elements in an array.

#include<stdio.h>
#include<stdlib.h>

// Function to get the length of the array
int getlen()
{
    int len;
    printf("Enter length of the array: ");
    scanf("%d", &len);
    printf("The length: %d\n", len);
    return len;
}

// Function to create the array and input its elements
void createarray(int len, int *ptr)
{
    for(int i = 0; i < len; i++)
    {
        printf("Enter element %d: ", i);
        scanf("%d", &ptr[i]);
    }
}

// Function to copy the elements of one array to another
void copyarray(int len, int *ptr, int *ptr2)
{ 
    for(int i = 0; i < len; i++)
    {
        ptr2[i] = ptr[i];
    }
}

// Function to print the elements of an array
void printarray(int len, int *ptr2)
{
    for(int i = 0; i < len; i++)
    {
        printf("%5d", ptr2[i]);
    }
}

// Main function
int main()
{
    int len;
    len = getlen();
    printf("Length: %d\n", len);

    // Dynamic memory allocation for arrays
    int *arr = (int*)malloc(len * sizeof(int));
    int *arr2 = (int*)malloc(len * sizeof(int));

    // Input the elements of the array
    createarray(len, arr);

    // Copy the elements of the array to another array
    copyarray(len, arr, arr2);

    // Print the elements of the copied array
    printf("Copied array elements: ");
    printarray(len, arr2);
    printf("\n");

    // Free the allocated memory
    free(arr);
    free(arr2);

    return 0;
}
