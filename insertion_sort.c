/*
 * insertion_sort.c
 * Author: Gael Morales Hernandez
 *
 * Reads 6 integers from the user and sorts them in ascending order
 * using the Insertion Sort algorithm.
 */

#include <stdio.h>
#include <conio.h>

int main() {
    int arr[6];

    printf("Enter 6 numbers:\n");
    for (int i = 0; i < 6; i++) {
        scanf("%d", &arr[i]);
    }

    /* Insertion Sort: shift elements right to insert current value */
    for (int i = 1; i < 6; i++) {
        int current = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > current) {
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = current;
    }

    printf("Sorted array (Insertion Sort):\n");
    for (int i = 0; i < 6; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    getch();
    return 0;
}
