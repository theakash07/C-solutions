#include<stdio.h>
#include<string.h>
#include<stdlib.h>

// Function to get the size of the array from the user
int getlen()
{
    int len;
    puts("Enter size of array: "); // Prompt user to enter the size of the array
    scanf("%d", &len); // Read the input from the user
    return len;
}

// Function to create the array and populate it with user input
void createarray(int len, int *ptr)
{
    for(int i = 1; i <= len; i++)
    {
        printf("Element %d: ", i); // Prompt user to enter the value for each element
        scanf("%d", &ptr[i]); // Read the input value for each element
    }
}

// Function to calculate the sum of elements in the array
int sumarray(int len, int *ptr)
{
    int sum = 0;
    for(int i = 1; i <= len; i++)
    {
        sum = sum + ptr[i]; // Add each element to the sum
    }
    printf("The sum of elements is: %d", sum);
    return sum;
}

int main()
{
    int len;
    len = getlen(); // Call the getlen function to get the size of the array from the user
    printf("Len = %d\n", len);
    
    int *arr = (int*)malloc(len * sizeof(int)); // Memory allocation from the heap section
    int whole;
    
    createarray(len, arr); // Call the createarray function to create the array and populate it with values
    whole = sumarray(len, arr); // Call the sumarray function to calculate the sum of elements in the array
    
    printf("\nThe whole is %d", whole);
    
    free(arr); // Free the allocated memory
    
    return 0;
}
