#include <stdio.h>

int main() {
    // Write a program to find missing number in array

    int arr[100], n;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter the elements of the array as a sequence in form of 1 to n: \n");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for(int i = 0; i < (n+1); i++) {
        if(arr[i] == (i+1)) {
            continue;
        } else {
            printf("Missing number: %d\n", i+1);
            break;
        }
    }

    return 0;
}