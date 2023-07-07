#include<stdio.h>
#include<stdlib.h>

int getlen()
{
    int len;
    puts("Enter len of Array:"); // Prompt user to enter the length of the array
    scanf("%d",&len); // Read the input from the user
    return len;
}

void create_array(int limit,int *ptr)
{
    for(int i=1;i<=limit;i++)
    {
        printf("Element : %d =",i); // Prompt user to enter the value for each element
        scanf("%d",&ptr[i]); // Read the input value for each element
    }

    printf("The elements are: ");

    for(int i=1;i<=limit;i++)
    {
        printf("%5d",ptr[i]); // Print the elements of the array
    }

}

void rev_array(int len,int *ptr)
{
    for(int i=len;i>=1;i--)
    {
        printf("\n%d\n",ptr[i]); // Print the elements of the array in reverse order
    }
}

int main()
{
    int len;
    len=getlen(); // Call the getlen function to get the length of the array from the user
    printf("%d\n",len);
    int *arr=(int*)malloc(len*sizeof(int));//memory allocation from heap section 

    create_array(len,arr); // Call the create_array function to read values into the array and display them
    rev_array(len,arr); // Call the rev_array function to display the elements of the array in reverse order

    free(arr); // Free the allocated memory

    return 0;
}
