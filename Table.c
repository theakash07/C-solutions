#include<stdio.h>

int main() {
    int i = 1; // Initialize 'i' to 1
    int a[10]; // Array to store multiplication results
    int *b = &a[0]; // Pointer to the first element of the array
    int table; // Variable to store the table number

    puts("Enter table number:\n"); // Prompt the user to enter the table number
    scanf("%d", &table); // Read the table number from the user and store it in 'table'

    while (i != 11) { // Execute the loop until 'i' reaches 11
        b[i] = table * i; // Calculate the multiplication result and store it in the array element

        printf("%dx%d=%d\n", table, i, b[i]); // Print the multiplication expression and its result
        i++; // Increment 'i' by 1 for the next iteration
    }

    return 0; // Indicate successful program execution
}
