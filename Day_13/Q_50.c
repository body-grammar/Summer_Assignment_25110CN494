#include <stdio.h>

int main() {
    // Write a program to find sum and average of array

    // Declaration of variables
    int arr[100], n, sumTerm = 0;

    // Inputting the number of elements in the array from the user
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    // Inputting the elements of the array from the user
    printf("Enter the elements of the array: \n");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Taking the sum of the terms of the array 
    for(int i = 0; i < n; i++) {
        sumTerm += arr[i];
    }

    // Taking the average of the terms of the array 
    float ave = (float)sumTerm / n; 

    // Priting the sum and the average of the array 
    printf("Sum of the terms of the array is %d.\n", sumTerm);
    printf("Average of the terms of the array is %f.\n", ave);

    return 0;
}