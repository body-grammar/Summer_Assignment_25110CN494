#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Write a program to create a number guessing game

    // Declaration of variables
    srand(time(NULL));
    int num = rand() % 100 + 1;

    // Explanation for the game
    printf("Guess a number between 1 and 100: \n");
    printf("Remember!! You get maximum ten attempts to guess the number.\n");
    printf("Current score: 100 points\n");

    // Game simulation
    int score = 100;

    for(int i = 0; i < 10; i++) {
        int guess;
        printf("Enter your answer: ");
        scanf("%d", &guess);

        if(guess > num && num < 100) {
            printf("Too high!\n");
            score -= 10;
            printf("Current score: %d\n", score);
        } else if (guess < num && guess > 1) {
            printf("Too low!\n");
            score -= 10;
            printf("Current score: %d\n", score);
        } else if(guess == num) {
            printf("Bingo!");
            printf("You scored %d points.\n", score);
            break;
        }
    }

    return 0;
}