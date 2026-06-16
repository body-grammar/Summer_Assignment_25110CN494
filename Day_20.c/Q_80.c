#include <stdio.h>

int main() {
    // Write a program to find column-wise sum

    // Declaration of variables
    int mat[100][100], m, n;
    int colSum[100];

    // Taking input from the user
    printf("Enter the number of rows and columns in the matrix: ");
    scanf("%d %d", &m, &n);

    printf("Enter the elements of the matrix: \n");
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    // Finding the column-wise sum of the given matrix
    for(int j = 0; j < n; j++) {
        colSum[j] = 0;
    }

    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            colSum[j] += mat[i][j];
        }
    }

    // Printing the column-wise sum of the given matrix
    printf("The column-wise sum of the given matrix is: \n");
    for(int j = 0; j < n; j++) {
        printf("%d\n", colSum[j]);
    }

    return 0;
}