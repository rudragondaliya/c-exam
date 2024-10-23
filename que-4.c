// Q-4 write a c program to find square of each elements of an 1D array using pointer.

#include <stdio.h>

int i;
void square(int *arr, int size) {
    for (i=0;i<size;i++) {
        *(arr + i) = (*(arr + i)) * (*(arr + i));  
    }
}

int main() {
    int n,i;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for (i=0;i<n;i++) {
        scanf("%d", &arr[i]);
    }

    square(arr, n);

    
    printf("The squared elements of the array are:\n");
    for (i=0;i<n;i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

