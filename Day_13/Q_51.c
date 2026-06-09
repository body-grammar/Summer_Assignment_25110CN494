#include <stdio.h>

int main() {
    // Write a program to find the largest and smallest element

    // Declaration of variables
    int arr[100], n; 

    // Inputting the number of elements in the array from the user
    printf("Enter the number of terms in the array: ");
    scanf("%d", &n);

    // Inputting the elements of the array from the user
    printf("Enter the elements of the array: \n");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Initializing the first element of the array as the maximum element
    int max = arr[0];

    // Searching for the largest element
    for(int i = 1; i < n; i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
    }

    // Priting the largest element
    printf("The largest term of the array is: %d\n", max);

    // Initializing the first element of the array as the minimum element
    int min = arr[0];

    // Searching for the smallest element
    for(int i = 0; i < n; i++) {
        if(arr[i] < min) {
            min = arr[i];
        }
    }

    // Priting the smallest element
    printf("The smallest term of the array is: %d", min);

    return 0;
}