// #include <stdio.h>
#include <stdlib.h>

#define N 6

int a[N];

void insert() {
    // Taking input for array elements
    printf("Enter %d elements:\n", N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &a[i]);
    }

    // Printing the array elements
    printf("The elements are:\n");
    for (int i = 0; i < N; i++) {
        printf("The element at index [%d]: %d\n", i, a[i]);
    }
}

int search() {
    int data;
    printf("Enter data: ");
    scanf("%d", &data);

    int l = 0, r = N, mid;
    while (l <= r) {
        mid = (l + r) / 2;
        if (data == a[mid]) {
            return mid;
        } else if (data < a[mid]) {
            r = mid - 1;
        } else {
            l = mid + 1;
        }
    }

    // If element is not found, return -1
    return -1;
}

int main() {
    insert();
    int index = search();
    if (index != -1) {
        printf("The index is %d\n", index);
    } else {
        printf("The element was not found\n");
    }
    return 0;
}
