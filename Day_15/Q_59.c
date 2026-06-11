#include <stdio.h>

int main() {
    // Write a program to rotate array right

    // Declaration of variables
    int arr[100], n;

    // Inputting the number of elements in the array from the user
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    // Inputting the elements of the array from the user
    printf("Enter the elements of the array: \n");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Initializing the value at the last index of the array to a variable
    int lastIndex = arr[n-1];

    // Rotating the array to right
    for(int i = n-1; i >= 0; i--) {
        arr[i] = arr[i-1];
    }

    // Reinitializing the value at the last index to zero index
    arr[0] = lastIndex;

    // Printing the rotated array
    printf("Rotated array is: \n");
    for(int i = 0; i < n; i++) {
        printf("%d\n", arr[i]);
    }

    return 0;
}