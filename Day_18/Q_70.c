#include <stdio.h>

int main() {
    // Write a program to selection sort

    // Declaration of variables
    int arr[100], n, temp;

    // Inputting the number of elements in the array from the user
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    // Inputting the elements in the array from the user
    printf("Enter the elements of the array: \n");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Applying selection sort on the array
    for(int i = 0; i < n; i++) {

        int min = i;
        
        for(int j = i+1; j < n; j++) {
            if(arr[j] < arr[min]) {
                min = j;
            }
        }

        temp = arr[i];
        arr[i] = arr[min]; 
        arr[min] = temp;
    }

    // Printing the sorted array
    printf("Sorted array is: \n");
    for(int i = 0; i < n; i++) {
        printf("%d\n", arr[i]);
    }

    return 0;
}