#include <stdio.h>
#include <math.h>

int main() {
    // Write a program to print Armstrong numbers in a range

    int l_num, u_num, num1, num2, rem, sum=0;

    printf("Enter the lower and upper range: ");
    scanf("%d %d", &l_num, &u_num);

    for (int i = l_num; i <= u_num; i++) {
        num1 = num2 = i;
        int cnt = 0;

        while(num1 > 0) {   // Counting the number of digits in the number
            cnt++;
            num1 = num1/10;
        }

        while(num2 > 0) {
            rem = num2 % 10;
            sum = sum + pow(rem, cnt);
            num2 = num2 / 10;
        }

        if (sum == i) {
            printf("%d\n", i);  // Printing the Armstrong numbers in the range
        }

        sum = 0;
    }

    return 0;
}