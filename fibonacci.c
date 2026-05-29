/*
 * fibonacci.c
 * Author: Gael Morales Hernandez
 *
 * Reads the number of iterations from the user and prints
 * the Fibonacci sequence up to that many terms.
 */
#include <stdio.h>
#include <conio.h>

int main()
{
    // Variable to store the number of iterations
    int times;
    
    // Initial values of the Fibonacci sequence
    int a = 0, b = 1, c;

    // Ask the user for the number of iterations
    printf("Enter the number of iterations: ");
    scanf("%d", &times);

    // Validation: the number must be greater than 0
    if (times <= 0) {
        // Error message if the number is 0 or negative
        printf("Please enter a positive integer greater than 0.\n");
    } else {
        // Loop that runs the indicated number of times
        for (int i = 0; i < times; i++) {
            // Print the current value of 'a'
            printf("%d ", a);
            
            // Calculate the next number in the sequence
            c = a + b;
            
            // Update the values for the next iteration
            a = b;
            b = c;
        }
    }

    // End of program
    return 0;
}
