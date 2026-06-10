#include <stdio.h>

int main() {
    // Write a program to find duplicates in the array

    // Declaration of variables
    int arr[100], n;

    // Inputting the number of elements in the array from the user
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    // Inputting the elements in the array from the user
    printf("Enter the elements of the array: \n");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Checking for duplicate elements in the array
    printf("Duplicate elements are:\n");
    for(int i = 0; i < n; i++) {
        int duplicate = 0;

        // Check if arr[i] has already appeared before
        for(int k = 0; k < i; k++) {
            if(arr[i] == arr[k]) {
                duplicate = 1;
                break;
            }
        }

        if(duplicate) {
            continue;
        }

        // Check if arr[i] appears again later
        for(int j = i + 1; j < n; j++) {
            if(arr[i] == arr[j]) {
                printf("%d ", arr[i]);
                break;
            }
        }
    }

    printf("\n");

    return 0;
}