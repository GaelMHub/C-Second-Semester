/*
 * array_search.c
 * Author: Gael Morales Hernandez
 *
 * Reads a number and searches for it in a predefined array,
 * reporting whether it was found and at which position.
 */
#include <stdio.h>
#include <conio.h>

int main()
{
	int number;
	int array[10] = {2, 4, 5, 6, 8, 9, 10, 12, 13, 15};

	printf("Enter a number to search: ");
	scanf("%d", &number);

	for (int i = 0; i < 10; i++) {
		if (array[i] == number) {

			printf("The number you are looking for is in the array\n");
			printf("The number is at position: %d\n", i);
			break;

		}

		else if (array[i] != number && i == 9) {
			printf("The number you are looking for is not in the array\n");
		}
		
	}

	return 0;
}
