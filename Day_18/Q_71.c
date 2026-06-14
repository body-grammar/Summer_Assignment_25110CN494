#include <stdio.h>

int main() {
    // Write a program to binary search

    // Declaration of variables
    int arr[100], n, temp, sea;

    // Inputting the number of elements in the array from the user
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    // Inputting the elements in the array from the user
    printf("Enter the elements of the array: \n");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Sorting the array
    for(int i = 0; i < n-1; i++) {
        for(int j = 0; j < n-1; j++) {
            if(arr[j] > arr[j+1]) {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    // Inputting the element to be searched for in the array
    printf("Enter the element to be searched: ");
    scanf("%d", &sea);

    // Applying binary search

    int l = 0;
    int u = n-1;
    int m = (l+u)/2;

    int found = 0;

    while(l <= u) {
        m = (l + u) / 2;

        if(arr[m] == sea) {
            found = 1;
            break;
        }

        if(sea < arr[m]) {
            u = m - 1;
        } else {
            l = m + 1;
        }
    }

    // Printing whether the element found or not
    if(found) {
        printf("%d was found at %d position.\n", sea, m);
    } else {
        printf("%d not found in the array.\n", sea);
    }

    return 0;
}