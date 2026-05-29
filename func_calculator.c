/*
 * func_calculator.c
 * Author: Gael Morales Hernandez
 *
 * Menu-driven calculator that uses functions to perform
 * addition, subtraction, multiplication, and division.
 */
#include <stdio.h>
#include <conio.h>

// Function declarations (prototypes).
// Declared before main so the program knows they exist.

void add(int a, int b);
void subtract(int a, int b);
void multiply(int a, int b);
void divide(int a, int b);

int main()
{
    int option = 0;
    int a, b;
    int quit = 0;

    printf("===========\n");
    printf("CALCULATOR\n");
    printf("===========\n");

    // The do-while loop repeats the menu
    // until the user chooses to exit (option 5).

    do {

        printf("\nOption 1: Add\n");
        printf("Option 2: Subtract\n");
        printf("Option 3: Multiply\n");
        printf("Option 4: Divide\n");
        printf("Option 5: Exit\n");

        printf("Choose an option: ");
        scanf("%d", &option);

        // The switch checks the chosen option
        // and runs the corresponding operation.

        switch (option) {

        case 1:
            printf("Enter two numbers: ");
            scanf("%d %d", &a, &b);
            add(a, b);
            break;

        case 2:
            printf("Enter two numbers: ");
            scanf("%d %d", &a, &b);
            subtract(a, b);
            break;

        case 3:
            printf("Enter two numbers: ");
            scanf("%d %d", &a, &b);
            multiply(a, b);
            break;

        case 4:
            printf("Enter two numbers: ");
            scanf("%d %d", &a, &b);

            if (b == 0) {
                printf("Enter another number that is not zero for the second value: ");
                scanf("%d", &b);
            }

            divide(a, b);
            break;

        case 5:
            quit = 1;
            printf("You have exited the program :)\n");
            break;

        default:
            printf("Invalid option\n");
        }

    } while (quit == 0);

    return 0;
}

// Functions for each mathematical operation

void add(int a, int b) {
    printf("Result: %d\n", a + b);
}

void subtract(int a, int b) {
    printf("Result: %d\n", a - b);
}

void multiply(int a, int b) {
    printf("Result: %d\n", a * b);
}

void divide(int a, int b) {
    printf("Result: %d\n", a / b);
}
