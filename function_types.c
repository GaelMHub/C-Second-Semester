/*
 * function_types.c
 * Author: Gael Morales Hernandez
 *
 * Demonstrates the four types of functions in C:
 *   1. With parameters and with return value  -> add()
 *   2. With parameters and no return value    -> print_age()
 *   3. No parameters and with return value    -> magic_number()
 *   4. No parameters and no return value      -> greeting()
 */

#include <stdio.h>
#include <conio.h>

/* Function prototypes */
int  add(int a, int b);
void print_age(int age);
int  magic_number();
void greeting();

int main() {
    int result;

    result = add(56, 78);
    greeting();

    printf("Sum result   : %d\n", result);
    printf("Magic number : %d\n", magic_number());

    print_age(18);
    print_age(56);
    print_age(14);

    getch();
    return 0;
}

/* With parameters, with return value */
int add(int a, int b) {
    int sum = a + b;
    return sum;
}

/* With parameters, no return value */
void print_age(int age) {
    printf("Your age is: %d years old\n", age);
}

/* No parameters, with return value */
int magic_number() {
    int number = 67;
    return number;
}

/* No parameters, no return value */
void greeting() {
    printf("\nWelcome to the function types demo.\n");
}
