#include <stdio.h>

int main() {
    // Write a program to count even and odd elements

    // Declaration of variables
    int arr[100], n, even=0, odd=0;

    // Inputting the number of elements in the array from the user
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    // Inputting the elements of the array from the user
    printf("Enter the elements of the array: \n");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Counting even and odd terms in the array
    for(int i = 0; i < n; i++) {
        if(arr[i] % 2 == 0) {
            even++;
        } else {
            odd++;
        }
    }

    // Priting the even and odd terms of the array
    printf("There are %d even terms and %d odd elements in the array.\n", even, odd);

    return 0;
}