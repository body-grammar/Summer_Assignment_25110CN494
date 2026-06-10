#include <stdio.h>

int main() {
    // Write a program to find the frequency of the element present in the array

    // Declaration of the variables
    int arr[100], n, freq = 0, search;

    // Inputting the number of elements in the array by the user
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    // Inputting the elements of the array by the user
    printf("Enter the elements of the array: \n");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Inputting the element to be searched for by the user
    printf("Enter the element to be searched for in the array: ");
    scanf("%d", &search);

    // Applying linear search to find the frequency of the required element
    for(int i = 0; i < n; i++) {
        if(arr[i] == search) {
            freq++;
        }
    }

    // Condition for the frequency of the element in the array
    if(freq > 0) {
        printf("%d occurs %d times in the array.\n", search, freq);
    } else {
        printf("%d is not present in the array.\n", search);
    }

    return 0;
}