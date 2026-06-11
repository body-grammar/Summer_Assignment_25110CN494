#include <stdio.h>

int main() {
    // Write a program to rotate array left

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

    // Initializing the element at the 0 index to a variable
    int zeroIndex = arr[0];

    // Rotating the array left
    for(int i = 0; i < n; i++) {
        arr[i] = arr[i + 1];
    }

    // Reinitializing the zero index value
    arr[n-1] = zeroIndex;

    // Printing the rotated array
    printf("Rotated left array is: \n");
    for(int i = 0; i < n; i++) {
        printf("%d\n", arr[i]);
    }

    return 0;
}