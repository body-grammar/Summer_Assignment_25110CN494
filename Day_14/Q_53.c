#include <stdio.h>

int main() {
    // Write a program to linear search

    // Declaration of variables
    int arr[100], n, search, present = 0;

    // Inputting the number of elements in the array from the user
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    // Inputting the elements of the array from the user
    printf("Enter the elements of the array: \n");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Inputting the element to be searched by the user
    printf("Enter the elements to be searched: ");
    scanf("%d", &search);

    // Linear search
    for(int i = 0; i < n; i++) {
        if(arr[i] == search) {
            printf("%d is present at the %d position in the array.\n", search, i+1);
            present = 1;
            break;
        }
    }

    // Condition for the element being not present in the array
    if(present == 0) {
        printf("Element not found in the array.\n");
    }

    return 0;
}