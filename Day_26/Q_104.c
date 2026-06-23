#include <stdio.h>

int main() {
    // Write a program to create quiz application

    // Declaration of variables
    int score = 0;

    // Quiz Application
    printf("Welcome to the quiz!\n\n");

    // Question 1
    printf("Question 1:\n");
    printf("What is the capital of India?\n\n");
    
    printf("1. Mumbai\n");
    printf("2. Delhi\n");
    printf("3. Kolkata\n");
    printf("4. Lucknow\n");

    int answer1;
    printf("Enter your answer: ");
    scanf("%d", &answer1);

    if(answer1 == 2) {
        printf("Correct answer!\n\n");
        score++;
    } else {
        printf("Wrong answer!\n\n");
    }

    // Question 2
    printf("Question 2:\n");
    printf("What is 5 + 7?\n\n");
    
    printf("1. 12\n");
    printf("2. 13\n");
    printf("3. 14\n");
    printf("4. 15\n");

    int answer2;
    printf("Enter your answer: ");
    scanf("%d", &answer2);

    if(answer2 == 1) {
        printf("Correct answer!\n\n");
        score++;
    } else {
        printf("Wrong answer!\n\n");
    }

    // Question 3
    printf("Question 3:\n");
    printf("Which language is used for system programming?\n\n");
    
    printf("1. HTML\n");
    printf("2. CSS\n");
    printf("3. Python\n");
    printf("4. C\n");

    int answer3;
    printf("Enter your answer: ");
    scanf("%d", &answer3);

    if(answer3 == 4) {
        printf("Correct answer!\n\n");
        score++;
    } else {
        printf("Wrong answer!\n\n");
    }

    printf("Quiz Completed!!\n");
    printf("Your Score: %d/3", score);

    return 0;
}