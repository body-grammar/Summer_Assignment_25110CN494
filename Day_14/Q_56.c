#include <stdio.h>

int main() {
    // Write a program to find duplicates in an array

    // Declaration of variables
    int arr[100], n;
    int cnt = 0;

    // Inputting the number of elements in the array from the user
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    // Inputting the elements in the array from the user
    printf("Enter the elements of the array: \n");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Checking for duplicates in the array
    printf("Duplicates in the array are: \n");
    for(int i = 0; i < n; i++) {

        // Checking for the duplicates before the required index
        for(int k = 0; k < i; k++) {
            if(arr[i] == arr[k]) {
                cnt--;
                break;
            }
        }

        // Checking for the duplicates after the required index
        for(int j = i + 1; j < n; j++) {
            if(arr[i] == arr[j]) {
                cnt++;
                break;
            }
        }

        if (cnt > 0) {
            printf("%d\n", arr[i]);
        }

        cnt = 0;
    }

    return 0;
}