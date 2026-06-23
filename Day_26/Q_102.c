#include <stdio.h>

int main() {
    // Write a program to create a voting eligibility system

    int age;

    printf("Enter your age: ");
    scanf("%d", &age);

    if(age >= 18) {
        printf("You are eligible to vote!\n");
    } else {
        printf("Not eligible to vote.\n");
    }

    return 0;
}