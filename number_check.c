/*
 * number_check.c
 * Author: Gael Morales Hernandez
 *
 * Reads a float and classifies it as integer or decimal,
 * positive, negative, or zero, and checks if it falls between 0 and 100.
 */
#include <stdio.h>
#include <conio.h>

// Function that analyzes a number and classifies its characteristics
void num_type(float n) {
    // Checks if the number is an integer by comparing its integer part with the original value
    if ((int)n == n) {
        printf("The number is an integer\n");
    } else {
        printf("The number is a decimal\n");
    }

    // Determines if the number is positive, negative, or zero
    if (n > 0) {
        printf("The number is positive\n");
    } else if (n < 0) {
        printf("The number is negative\n");
    } else {
        printf("The number is zero\n");
    }

    // Checks if the number is in the range 0 to 100, inclusive
    if (n >= 0 && n <= 100) {
        printf("The number is between 0 and 100\n");
    } else {
        printf("The number is not between 0 and 100\n");
    }
}

int main() {
    float num;  // Variable to store the number entered by the user

    printf("Enter a number:\n");

    // Reads a float from standard input
    // scanf returns 1 if a number was read correctly, otherwise it returns something else
    if (scanf("%f", &num) != 1) {
        printf("Error: you did not enter a valid number\n");
        return 1; // Ends the program with an error code
    }

    // Calls num_type to analyze and display the characteristics of the number
    num_type(num);

    return 0; // Ends the program successfully
}
