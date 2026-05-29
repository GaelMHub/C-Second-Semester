/*
 * bubble_sort.c
 * Author: Gael Morales Hernandez
 *
 * Sorts a predefined array of integers using the bubble sort algorithm
 * and prints the result.
 */
#include <stdio.h>
#include <conio.h>

int main() {
    int array[] = {5, 2, 9, 1, 6};
    int n = 5;
    int i, j, temp;

    // Bubble sort
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - 1 - i; j++) {
            if (array[j] > array[j + 1]) {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }

    // Show result
    printf("Sorted array:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }

    return 0;
}
