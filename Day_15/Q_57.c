#include <stdio.h>

int main() {
    // Write a program to reverse an array

    // Declaration of variables
    int arr[100], n, rev[100];

    // Inputting the number of elements in the array from the user
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    // Inputting the elements in the array from the user
    printf("Enter the elements of the array: \n");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Reversing the array
    for(int i = 0; i < n; i++) {
        rev[n-1-i] = arr[i];
    }

    // Printing the reversed array
    printf("Reverse of the array: \n");
    for(int i = 0; i < n; i++) {
        printf("%d\n", rev[i]);
    }

    return 0;
}