#include <stdio.h> 

int main() {
    // Write a program to print prime numbers in a range

    int l_num, u_num;
    printf("Enter the lower limit of the range: ");
    scanf("%d", &l_num);
    printf("Enter the upper limit of the range: ");
    scanf("%d", &u_num);

    for (int i = l_num; i<=u_num; i++) {
        int fact=0;
        for (int j = 1; j<=i; j++) {
            if (i%j==0) {
                fact++;
            }
        }

        if (fact<=2) {
            printf("%d\n", i);
        }
    }

    return 0;
}