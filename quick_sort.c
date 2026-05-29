/*
 * quick_sort.c
 * Author: Gael Morales Hernandez
 *
 * Reads 6 integers from the user and sorts them in ascending order
 * using the Quick Sort algorithm with a middle-element pivot.
 */

#include <stdio.h>
#include <conio.h>

/*
 * quickSort
 * Recursively partitions and sorts arr[start..end] in ascending order.
 * Uses the middle element as the pivot.
 */
void quickSort(int arr[], int start, int end) {
    int i = start, j = end;
    int pivot = arr[(start + end) / 2];
    int temp;

    while (i <= j) {
        while (arr[i] < pivot) i++;
        while (arr[j] > pivot) j--;

        if (i <= j) {
            temp   = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            i++;
            j--;
        }
    }

    if (start < j) quickSort(arr, start, j);
    if (i < end)   quickSort(arr, i, end);
}

int main() {
    int arr[6];

    printf("Enter 6 numbers:\n");
    for (int i = 0; i < 6; i++) {
        scanf("%d", &arr[i]);
    }

    quickSort(arr, 0, 5);

    printf("Sorted array (Quick Sort):\n");
    for (int i = 0; i < 6; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    getch();
    return 0;
}
