#include <stdio.h>
#include <stdlib.h>

int main() {
    // Write a program to find diagonal sum

    // Declaration of variables
    int mat[100][100], m, n;
    int sum = 0;

    // Taking input from the user
    printf("Enter the number of rows and columns in the matrix: ");
    scanf("%d %d", &m, &n);

    if(m != n) {
        printf("Only sqaure matrices please!!");
        exit(0);
    }

    printf("Enter the elements of the matrix: \n");
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    // Finding the sum of diagonal elements
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            if(i == j) {
                sum += mat[i][j];
            }
        }
    }

    // Printing the sum of the diagonal elements of the matrix
    printf("The sum of the diagonal elements of the matrix is: %d\n", sum);

    return 0;
}