#include<stdio.h>

int main() {
    int i = 0; // Initialize 'i' to 0
    int a[10];
    int *b = &a[0];
    int cube;

    while (i < 5) {
        printf("Enter a number: ");
        scanf("%d", &b[i]);
        cube = pow(b[i],3); // Calculate the cube of the number using multiplication
        printf("The cube is %d\n", cube);
        i++;
    }

    return 0;
}
