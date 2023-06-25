#include <stdio.h>
#include <stdlib.h>

// Define the size of the array
#define n 5

// Declare the array
int a[n];

// Function to take input for array elements and print them
void search() {
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("The elements are:\n");
    for (int i = 0; i < n; i++) {
        printf("The element %d: %d\n", i, a[i]);
    }
}

// Function to search for a specific element in the array
void searching(int data, int count) {
    for (int i = 0; i < n; i++) {
        if (a[i] == data) {
            printf("The index is %d\n", i);
            count++;
        }
    }
    if(count>1)
    {
        printf("The element is repeated %d times\n",count);
    }

    if (count == 0) {
        printf("The element was not found\n");
    }
}

int main() {
    // Call the search function
    search();

    int data;
    int count = 0;

    printf("Enter data to search: ");
    scanf("%d", &data);

    // Call the searching function
    searching(data, count);

    return 0;
}
