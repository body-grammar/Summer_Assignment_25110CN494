#include <stdio.h>

int main() {
    // Write a program to find common elements

    // Declaration of variables
    int arr1[100], n;
    int arr2[100], m;
    int commonElements[100];

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

    int k = 0;

    // Storing common elements in the common elements array
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if(arr1[i] == arr2[j]) {
                commonElements[k] = arr1[i];
                k++;
                break;
            }
        }
    }

    // Deleting duplicates from the common elements array
    for(int i = 0; i < k; i++) {
        for(int j = i+1; j < k; j++) {
            if(commonElements[i] == commonElements[j]) {
                for(int t = j; t < k-1; t++) {
                    commonElements[t] = commonElements[t+1];
                }
                k--;
                j--;
            }
        }
    }

    // Printing the common elements array
    printf("The intersection of array is: \n");
    for(int i = 0; i < k; i++) {
        printf("%d\n", commonElements[i]);
    }

    return 0;
}