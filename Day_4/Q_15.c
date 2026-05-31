#include <stdio.h>
#include <math.h>

int main() {
    // Write a program to check Armstrong number

    int num, num1, num2, cnt=0, rem, new=0;

    printf("Enter any number: ");
    scanf("%d", &num);

    num1 = num2 = num;

    while (num1 > 0) {  // Counting the number of digits in the number
        cnt++;  
        num1 = num1/10;
    }

    while (num2 > 0) {  
        rem = num2 % 10;
        new = new + pow(rem, cnt);
        num2 = num2/10;
    }

    if(new == num) {    // Verification of Armstrong number
        printf("%d is an armstrong number.\n", num);
    } else {
        printf("%d is not an armstrong number.\n", num);
    }

    return 0;
}