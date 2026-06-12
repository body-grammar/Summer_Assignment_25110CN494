#include <stdio.h>

int main() {
    // Write a program to find maximum frequency element

    // Declaration of variables
    int arr[100], n, freq=0, maxFreq = 0, req;

    // Inputting the number of elements in the array from the user
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    // Inputting the elements in the array from the user
    printf("Enter the elements of the array: \n");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Searching for the element with maximum frequency
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(arr[i] == arr[j]) {
                freq++;
            }            
        }

        if(freq > maxFreq) {
            maxFreq = freq;
            req = arr[i];
            freq = 0;
        }
    }

    // Printing the element with maximum frequency
    printf("Element with maximum frequency is: %d\n", req);

    return 0;
}