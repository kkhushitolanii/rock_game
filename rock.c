#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int generateComputerChoice() {
    return rand() % 3; 
}
void printResult(int userChoice, int computerChoice) {
    printf("Your choice: ");
    switch (userChoice) {
        case 0:
            printf("Rock\n");
            break;
        case 1:
            printf("Paper\n");
            break;
        case 2:
            printf("Scissors\n");
            break;
    }
    printf("Computer's choice: ");
    switch (computerChoice) {
        case 0:
            printf("Rock\n");
            break;
        case 1:
            printf("Paper\n");
            break;
        case 2:
            printf("Scissors\n");
            break;
    }
    if (userChoice == computerChoice) {
        printf("It's a tie!\n");
    } else if ((userChoice == 0 && computerChoice == 2) ||
               (userChoice == 1 && computerChoice == 0) ||
               (userChoice == 2 && computerChoice == 1)) {
        printf("You win!\n");
    } else {
        printf("Computer wins!\n");
    }
}
int main() {
    int userChoice, computerChoice;
    srand(time(NULL));
    printf("Welcome to Rock-Paper-Scissors!\n");
    printf("Enter your choice:\n");
    printf("0 - Rock\n1 - Paper\n2 - Scissors\n");
    scanf("%d", &userChoice);
    if (userChoice < 0 || userChoice > 2) {
        printf("Invalid choice. Please enter a valid choice.\n");
        return 1;
    }
    computerChoice = generateComputerChoice();
    printResult(userChoice, computerChoice);
    return 0;
}