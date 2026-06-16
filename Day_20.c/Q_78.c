#include <stdio.h>
#include <stdlib.h>

int main() {
    // Write a program to check for symmetric matrix

    // Declaration of variables
    int mat[100][100], m, n;
    int trans[100][100];

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

    // Finding the transpose of the matrix
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            trans[i][j] = mat[j][i];
        }
    }

    int cnt = 0; 

    // Checking for symmetric matrix
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if(trans[i][j] == mat[i][j]) {
                cnt++;
            }
        }
    }

    // Printing whether the matrix is symmetric or not
    if(cnt == (m*n)) {
        printf("The given matrix is a symmetric matrix.\n");
    } else {
        printf("The given matrix is not a symmetric matrix.\n");
    }

    return 0;
}