#include <stdio.h>

int main() {
   int i;
   int sum = 0;
   float avg;
   int a[10]; // Decreased the size of the array to match the loop iterations
   int *b = a; // Removed the incorrect assignment of &a[200]

   printf("Enter the number of elements (up to 10):\n");
   int numElements;
   scanf("%d", &numElements);
   
   printf("Enter the elements:\n");
   for (i = 0; i < numElements; i++) { // Changed the loop condition to match the number of elements
       scanf("%d", &b[i]);
       sum += b[i];
   }

   printf("The sum is %d\n", sum);
   avg = (float)sum / numElements; // Cast sum to float to ensure floating-point division
   printf("The average is %.2f\n", avg); // Added \n to print a new line after the average
   
   return 0;
}
