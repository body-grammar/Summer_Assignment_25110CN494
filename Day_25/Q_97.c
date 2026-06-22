#include <stdio.h>

int main() {
    // Write a program to merge two sorted array

    // Declaration of variables
    int arr1[100], arr2[100];
    int n1, n2, temp1, temp2;
    int merged[200];

    // Taking input from the user
    printf("Enter the size of the first array: ");
    scanf("%d", &n1);
    printf("Enter the size of the second array: ");
    scanf("%d", &n2);

    printf("Enter the elements of the first array: \n");
    for(int i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter the elements of the second array: \n");
    for(int i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }

    // Sorting the arrays
    for(int i = 0; i < n1-1; i++) {
        for(int j = 0; j < n1-1; j++) {
            if(arr1[j] > arr1[j+1]) {
                temp1 = arr1[j];
                arr1[j] = arr1[j+1];
                arr1[j+1] = temp1;
            }
        }
    }

    for(int i = 0; i < n2-1; i++) {
        for(int j = 0; j < n2-1; j++) {
            if(arr2[j] > arr2[j+1]) {
                temp2 = arr2[j];
                arr2[j] = arr2[j+1];
                arr2[j+1] = temp2;
            }
        }
    }

    // Merging into one sorted array
    int i = 0, j = 0, k = 0;

    while(i < n1 && j < n2) {
        if(arr1[i] <= arr2[j]) {
            merged[k++] = arr1[i++];
        } else {
            merged[k++] = arr2[j++];
        }
    }

    while(i < n1) {
        merged[k++] = arr1[i++];
    }

    while(j < n2) {
        merged[k++] = arr2[j++];
    }

    // Printing the merged array
    printf("Merged array:\n");
    for(int i = 0; i < k; i++) {
        printf("%d\t", merged[i]);
    }

    return 0;
}