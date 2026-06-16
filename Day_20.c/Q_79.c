#include <stdio.h>

int main() {
    // Write a program to find row-wise sum

    // Declaration of variables
    int mat[100][100], m, n;
    int rowSum[100][100];

    // Taking input from the user
    printf("Enter the number of rows and columns in the matrix: ");
    scanf("%d %d", &m, &n);

    printf("Enter the elements of the matrix: \n");
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    // Finding the row-wise sum of the given matrix
    printf("The row-wise sum of the given matrix is: \n");
    for(int i = 0; i < m; i++) {

        rowSum[i][0] = 0;

        for(int j = 0; j < n; j++) {
            rowSum[i][0] += mat[i][j];
        }
    }

    // Printing the row sum of matrix
    for(int i = 0; i < m; i++) {
        printf("%d\n", rowSum[i][0]);
    }

    return 0;
}