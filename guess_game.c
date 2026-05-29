/*
 * guess_game.c
 * Author: Gael Morales Hernandez
 *
 * Number guessing game where the user has 5 attempts to guess
 * a random number between 1 and 50. Tracks a point score.
 */
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    int points = 0, number, myNumber, option = 0;
    
    srand(time(NULL));

    while (option != 3) {

        printf("\nOption 1: Play the guessing game\n");
        printf("Option 2: View score\n");
        printf("Option 3: Exit\n");
        printf("Enter an option: ");
        scanf("%d", &option);

        if (option == 1) {

            number = (rand() % 50) + 1;
            int guessed = 0;

            for (int i = 0; i < 5; i++) {

                printf("Enter a number: ");
                scanf("%d", &myNumber);

                if (myNumber > number) {
                    printf("The number is lower\n");
                }
                else if (myNumber < number) {
                    printf("The number is higher\n");
                }
                else {
                    printf("You guessed the number!\n");
                    points += 100;
                    guessed = 1;
                    break;
                }
            }

            if (!guessed) {
                printf("You did not guess. The number was: %d\n", number);
                points -= 5;
            }
        }

        else if (option == 2) {
            printf("Your score is: %d\n", points);
        }

        else if (option == 3) {
            printf("You exited the program\n");
        }

        else {
            printf("Invalid option\n");
        }
    }

    return 0;
}
