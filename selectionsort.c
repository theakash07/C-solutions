#include <stdio.h>

void elements(int *A, int n)
{
    // Function for printing the elements of the array
    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
}

void selsort(int *A, int n)
{
    // Function for performing Selection Sort
    printf("Running Selection Sort....\n");

    for (int i = 0; i < n - 1; i++)
    {
        int minIndex = i; // Assume the current element is the minimum

        for (int j = i + 1; j < n; j++)
        {
            if (A[j] < A[minIndex])
            {
                minIndex = j; // Update the index of the minimum element
            }
        }

        // Swap the current element with the minimum element
        int temp = A[i];
        A[i] = A[minIndex];
        A[minIndex] = temp;
    }
}

int main()
{
    int A[] = {12, 23, 43, 90, 7, 56, 36};
    int n = 7;

    // Print the initial array
    printf("Initial array:\n");
    elements(A, n);

    // Sort the array using Selection Sort
    selsort(A, n);

    // Print the sorted array
    printf("Sorted array:\n");
    elements(A, n);

    return 0;
}
