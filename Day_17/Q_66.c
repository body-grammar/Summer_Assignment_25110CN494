#include <stdio.h>

int main() {
    // Write a program to find the union of arrays

    // Declaration of variables
    int arr1[100], n;
    int arr2[100], m;
    int uni[100];

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

    // Initializing the index values of union array
    int k = 0; 

    // Adding elements to the union array
    for(int i = 0; i < n; i++) {
        uni[k] = arr1[i];
        k++;
    }

    for(int i = 0; i < m; i++) {

        int cnt = 0; 

        for(int j = 0; j < k; j++) {
            if(uni[j] == arr2[i]) {
                cnt++;
            }
        }

        if(cnt == 0) {
            uni[k] = arr2[i];
            k++;
        }
    }

    // Printing the union array
    printf("Union of given array is: \n");
    for(int i = 0; i < k; i++) {
        printf("%d\n", uni[i]);
    }
}