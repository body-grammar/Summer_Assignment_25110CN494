#include <stdio.h>
#include <stdlib.h>

int main() {
    // Write a program to multiply matrices

    // Declaration of variables
    int mat1[100][100], m1, n1;
    int mat2[100][100], m2, n2;
    int prod[100][100];

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

    // Condition for multiplication of matrices
    if(n1 != m2) {
        printf("Multiplication not possible.\n");
        exit(0);
    }

    // Finding the product of the matrices
    for(int i = 0; i < m1; i++) {
        for(int j = 0; j < n2; j++) {
            prod[i][j] = 0;
            for(int k = 0; k < n1; k++) {
                prod[i][j] += (mat1[i][k])*(mat2[k][j]);
            }
        }
    }

    // Printing the product of the multiplication of the matrices
    printf("The product of the multiplication of the two matrices is: \n");
    for(int i = 0; i < m1; i++) {
        for(int j = 0; j < n2; j++) {
            printf("%d\t", prod[i][j]);
        }
        printf("\n");
    }

    return 0;
}