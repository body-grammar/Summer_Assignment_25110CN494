#include <stdio.h>

int main() {
    // Write a program to find the intersection of arrays

    // Declaration of variables
    int arr1[100], n;
    int arr2[100], m;
    int intersect[100];

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

    // Storing common elements in the intersection array
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if(arr1[i] == arr2[j]) {
                intersect[k] = arr1[i];
                k++;
                break;
            }
        }
    }

    // Deleting duplicates from the intersection array
    for(int i = 0; i < k; i++) {
        for(int j = i+1; j < k; j++) {
            if(intersect[i] == intersect[j]) {
                for(int t = j; t < k-1; t++) {
                    intersect[t] = intersect[t+1];
                }
                k--;
                j--;
            }
        }
    }

    // Printing the intersection array
    printf("The intersection of array is: \n");
    for(int i = 0; i < k; i++) {
        printf("%d\n", intersect[i]);
    }

    return 0;
}