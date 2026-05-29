/*
 * fifo_lifo.c
 * Author: Gael Morales Hernandez
 *
 * Fills a 5-element array and replaces either the first element
 * (FIFO) or the last element (LIFO) based on the user's choice.
 */
#include <stdio.h>
#include <conio.h>

int main() {
    int array[5];
    int i, option, newValue;

    printf("=== MENU ===\n");
    printf("1. FIFO\n");
    printf("2. LIFO\n");
    printf("Choose an option: ");
    scanf("%d", &option);

    // Fill the array
    printf("\nFill the array with 5 values:\n");
    for(i = 0; i < 5; i++) {
        printf("Position %d: ", i);
        scanf("%d", &array[i]);
    }

    // Show original array
    printf("\nOriginal array:\n");
    for(i = 0; i < 5; i++) {
        printf("%d ", array[i]);
    }

    // Ask for new value
    printf("\n\nEnter the value to replace: ");
    scanf("%d", &newValue);

    // FIFO or LIFO
    if(option == 1) {
        // FIFO: replaces the first element
        array[0] = newValue;
        printf("\nFIFO mode (first element replaced)\n");
    }
    else if(option == 2) {
        // LIFO: replaces the last element
        array[4] = newValue;
        printf("\nLIFO mode (last element replaced)\n");
    }
    else {
        printf("\nInvalid option\n");
        return 0;
    }

    // Show final array
    printf("\nFinal array:\n");
    for(i = 0; i < 5; i++) {
        printf("%d ", array[i]);
    }

    return 0;
}
