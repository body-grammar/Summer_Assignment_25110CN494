#include <stdio.h>

int main() {
    // Write a program to move zeroes to the end

    // Declaration of variables
    int arr[100], n, temp = 0, cpy[100];

    // Inputting the number of elements in the array from the user
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    // Inputting the elements in the array from the user
    printf("Enter the elements of the array: \n");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Storing non-zero values in the array first in the other array
    for(int i = 0; i < n; i++) {
        if(arr[i] != 0) {
            cpy[temp] = arr[i];
            temp++;
        }
    }

    // Storing zero values at the end of the array
    while(temp < n) {
        cpy[temp] = 0;
        temp++;
    }

    // Printing the modified array
    printf("Modified array is: \n");
    for(int i = 0; i < n; i++) {
        printf("%d\n", cpy[i]);
    }

    return 0;
}