#include <stdio.h>

int main() {
    // Write a program to move zeroes to the end

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

    // Shifting the zeroes at the end
    for(int i = 0; i < n-1; i++) {
        for(int j = 0; j < n-1; j++) {
            if(arr[j] == 0) {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
      

    // Printing the modified array
    printf("Modified array is: \n");
    for(int i = 0; i < n; i++) {
        printf("%d\n", arr[i]);
    }

    return 0;
}