/*
 * name_input.c
 * Author: Gael Morales Hernandez
 *
 * Reads the user's name and prints it back to the screen.
 */
#include <stdio.h>
#include <conio.h>

int main() {
    char name[50];
    printf("Enter your name: ");
    scanf("%49s", name);
    printf("Your name is %s\n", name);
    return 0;
}
