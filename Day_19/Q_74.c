#include <stdio.h>
#include <stdlib.h>

int main() {
    // Write a program to subtract matrices

    // Declaration of variables
    int mat1[100][100], m1, n1;
    int mat2[100][100], m2, n2;
    int subt[100][100];

    // Taking input from the user
    printf("Enter the number of rows and columns in the first matrix: ");
    scanf("%d %d", &m1, &n1);

    printf("Enter the elements of the first matrix: \n");
    for(int i = 0; i < m1; i++) {
        for(int j = 0; j < n1; j++) {
            scanf("%d", &mat1[i][j]);
        }
    }

    printf("Enter the number of rows and columns in the second matrix: ");
    scanf("%d %d", &m2, &n2);

    printf("Enter the elements of the second matrix: \n");
    for(int i = 0; i < m2; i++) {
        for(int j = 0; j < n2; j++) {
            scanf("%d", &mat2[i][j]);
        }
    }

    // Condition for subtraction of matrices
    if(m1 != m2 || n1 != n2) {
        printf("Subtraction of the matrices is not possible.\n");
        exit(0);
    }

    // Subtraction of matrices
    for(int i = 0; i < m1; i++) {
        for(int j = 0; j < n1; j++) {
            subt[i][j] = mat1[i][j] - mat2[i][j];
        }
    }

    // Printing the difference of the matrices
    printf("Difference of the given matrices is: \n");
    for(int i = 0; i < m1; i++) {
        for(int j = 0; j < n1; j++) {
            printf("%d\n", subt[i][j]);
        }
    }

    return 0;
}