/*
 * number_compare.c
 * Author: Gael Morales Hernandez
 *
 * Reads three integers and compares each pair,
 * printing whether each is greater, lesser, or equal.
 */
#include <stdio.h>
#include <conio.h>

int main()
{
    int number1, number2, number3;
    
    printf("Enter three numbers: ");
    scanf("%d %d %d", &number1, &number2, &number3);

            // Comparison of number 1 with number 2
    if (number1 > number2){
        printf("%d is greater than %d\n", number1, number2);
    }
    else if (number1 < number2){
        printf("%d is less than %d\n", number1, number2);
    }
    else{
        printf("%d is equal to %d\n", number1, number2);
    }
    
        // Comparison of number 1 with number 3
    if (number1 > number3){
        printf("%d is greater than %d\n", number1, number3);
    }
    else if (number1 < number3){
        printf("%d is less than %d\n", number1, number3);
    }
    else{
        printf("%d is equal to %d\n", number1, number3);
    }

    // Comparison of number 2 with number 3
    if (number2 > number3){
        printf("%d is greater than %d\n", number2, number3);
    }
    else if (number2 < number3){
        printf("%d is less than %d\n", number2, number3);
    }
    else{
        printf("%d is equal to %d\n", number2, number3);
    }

    return 0;
}
