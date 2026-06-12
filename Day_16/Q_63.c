#include <stdio.h>

int main() {
    // Write a program to Find pair with given sum. 

    // Declaration of variables
    int arr[100], n, target, result[100];

    // Inputting the number of elements in the array from the user
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    // Inputting the elements in the array from the user
    printf("Enter the elements of the array: \n");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Inputting the given sum from the user
    printf("Enter the given sum: ");
    scanf("%d", &target);

    // Loop to find the pair with given sum
    for(int i = 0; i < n; i++) {
        for(int j = i; j < n; j++) {
            if(arr[i] + arr[j] == target) {
                result[0] = arr[i];
                result[1] = arr[j];
            }
        }
    }

    // Printing the pair with given sum
    printf("The pair with the given sum are: \n");
    for(int i = 0; i < 2; i++) {
        printf("%d\t", result[i]);
    }

    return 0;
}