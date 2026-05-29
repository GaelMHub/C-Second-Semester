/*
 * array_manager.c
 * Author: Gael Morales Hernandez
 *
 * Interactive array manager for an integer array of up to 10 elements.
 * Supports random initialization, display, insertion, deletion,
 * linear search, and ascending/descending bubble sort.
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>

int main() {
    int array[10] = {0};
    int option = 0;
    int value, pos;
    int n = 5;

    srand(time(NULL));

    /* Initialize first 5 elements with random values */
    for (int i = 0; i < n; i++) {
        array[i] = rand() % 100 + 1;
    }

    printf("== MENU ==\n");
    printf("1. Initialize array with random values\n");
    printf("2. Display current array\n");
    printf("3. Add element at the end\n");
    printf("4. Insert element at a specific position\n");
    printf("5. Delete element by position\n");
    printf("6. Search for an element\n");
    printf("7. Sort ascending / descending\n");
    printf("8. Exit\n");

    while (option != 8) {
        printf("\nEnter an option: ");
        scanf("%d", &option);

        switch (option) {

            case 1:
                n = 5;
                for (int i = 0; i < n; i++) {
                    array[i] = rand() % 100 + 1;
                }
                printf("Array initialized with 5 random values.\n");
                break;

            case 2:
                printf("Array contents:\n");
                for (int i = 0; i < 10; i++) {
                    printf("array[%d] = %d\n", i, array[i]);
                }
                break;

            case 3:
                if (n < 10) {
                    printf("Enter the value to add: ");
                    scanf("%d", &value);
                    array[n] = value;
                    n++;
                    printf("Value added at position %d.\n", n - 1);
                } else {
                    printf("Array is full. Cannot add more elements.\n");
                }
                break;

            case 4:
                printf("Enter position (0-9) to insert at: ");
                scanf("%d", &pos);

                if (pos >= 0 && pos < 10) {
                    printf("Enter the value to insert: ");
                    scanf("%d", &value);
                    array[pos] = value;

                    if (pos >= n) n = pos + 1;

                    printf("Value inserted/replaced at position %d.\n", pos);
                } else {
                    printf("Invalid position.\n");
                }
                break;

            case 5:
                printf("Enter position (0-%d) to delete: ", n - 1);
                scanf("%d", &pos);

                if (pos >= 0 && pos < n) {
                    for (int i = pos; i < n - 1; i++) {
                        array[i] = array[i + 1];
                    }
                    array[n - 1] = 0;
                    n--;
                    printf("Element at position %d deleted.\n", pos);
                } else {
                    printf("Invalid position.\n");
                }
                break;

            case 6:
                printf("Enter the value to search for: ");
                scanf("%d", &value);
                int found = 0;
                for (int i = 0; i < n; i++) {
                    if (array[i] == value) {
                        printf("Value found at position %d.\n", i);
                        found = 1;
                        break;
                    }
                }
                if (!found) printf("Value not found.\n");
                break;

            case 7:
                printf("Sort ascending (1) or descending (2)? ");
                int mode;
                scanf("%d", &mode);
                for (int i = 0; i < n - 1; i++) {
                    for (int j = i + 1; j < n; j++) {
                        if ((mode == 1 && array[i] > array[j]) ||
                            (mode == 2 && array[i] < array[j])) {
                            int temp = array[i];
                            array[i] = array[j];
                            array[j] = temp;
                        }
                    }
                }
                printf("Array sorted.\n");
                break;

            case 8:
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid option.\n");
                break;
        }
    }

    getch();
    return 0;
}
