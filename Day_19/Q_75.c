#include <stdio.h>

int main() {
    // Write a program to find the transpose of a matrix

    // Declaration of variables
    int mat[100][100], m, n;
    int trans[100][100];

    // Taking input from the user
    printf("Enter the number of rows and columns of the matrix: ");
    scanf("%d %d", &m, &n);

    printf("Enter the elements of the matrices: \n");
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    // Finding the transpose of the matrix
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            trans[i][j] = mat[j][i];
        }
    }

    // Printing the transpose of the matrix
    printf("The transpose of the given matrix is: \n");
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            printf("%d\t", trans[i][j]);
        }

        printf("\n");
    }

    return 0;
}