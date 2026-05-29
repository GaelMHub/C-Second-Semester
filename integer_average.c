/*
 * integer_average.c
 * Author: Gael Morales Hernandez
 *
 * Reads three integers from the user and prints their average.
 */
#include <stdio.h>
#include <conio.h>
int main() {
	int number1, number2, number3;
	int average;
	
	printf("Enter your first number: ");
	scanf("%d", &number1);
	
	printf("Enter your second number: ");
	scanf("%d", &number2);
	
	printf("Enter your third number: ");
	scanf("%d", &number3);
	
	average = (number1 + number2 + number3) / 3;
	
	printf("Your average is: %d\n", average);
	
	return 0;
}
