/*
 * operator_calculator.c
 * Author: Gael Morales Hernandez
 *
 * Reads two floating-point numbers and an operator (+, -, *, /)
 * entered as a character, then prints the result.
 * Division by zero is handled and reported as an error.
 */

#include <stdio.h>
#include <conio.h>

int main() {
    float num1, num2, result;
    char operator;

    printf("Enter the first number: ");
    scanf("%f", &num1);

    printf("Enter the second number: ");
    scanf("%f", &num2);

    /* Space before %c skips leftover whitespace in the buffer */
    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator);

    switch (operator) {
        case '+':
            result = num1 + num2;
            printf("Result: %.2f\n", result);
            break;

        case '-':
            result = num1 - num2;
            printf("Result: %.2f\n", result);
            break;

        case '*':
            result = num1 * num2;
            printf("Result: %.2f\n", result);
            break;

        case '/':
            if (num2 == 0) {
                printf("Error: division by zero.\n");
            } else {
                result = num1 / num2;
                printf("Result: %.2f\n", result);
            }
            break;

        default:
            printf("Error: invalid operator.\n");
    }

    getch();
    return 0;
}
