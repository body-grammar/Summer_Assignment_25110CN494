#include <stdio.h>

int main() {
    // Write a program to merge arrays

    // Declaration of variables
    int arr1[100], n;
    int arr2[100], m;

    // Inputting the number of elements in the first array from the user
    printf("Enter the number of elements in the first array: ");
    scanf("%d", &n);

    // Inputting the elements in the first array from the user
    printf("Enter the elements of the first array: \n");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr1[i]);
    }

    // Inputting the number of elements in the second array from the user
    printf("Enter the number of elements in the first array: ");
    scanf("%d", &m);

    // Inputting the elements in the second array from the user
    printf("Enter the elements of the first array: \n");
    for(int i = 0; i < m; i++) {
        scanf("%d", &arr2[i]);
    }

    // Initializing the index value for the second array
    int j = 0;

    // Loop to merge arrays
    for(int i = n;  i < m+n; i++) {
        arr1[i] = arr2[j];
        j++;
    }

    // Printing the merged array
    printf("Merged array is: \n");
    for(int i = 0; i < m+n; i++) {
        printf("%d\n", arr1[i]);
    }

    return 0;
}