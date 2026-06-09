#include <stdio.h>

int main() {
    // Write a program to input and display array

    // Declaration of variables
    int arr[100], n;

    // Inputting the number of elements in the array from the user
    printf("Enter the number of terms in the array: ");
    scanf("%d", &n);

    // Inputting the elements of the array from the user
    printf("Enter the elements of the aray: \n");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Priting the elements of the array
    printf("The elements of the array are: \n");
    for(int i = 0; i < n; i++) {
        printf("%d\n", arr[i]);
    }

    return 0;
}