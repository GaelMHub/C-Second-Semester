/*
 * input_validator.c
 * Author: Gael Morales Hernandez
 *
 * Validates user input for three data types:
 * age (18-80), grade (0-100), and name (under 40 characters).
 * Re-prompts the user until a valid value is entered.
 */

#include <stdio.h>
#include <string.h>
#include <conio.h>

int main() {
    int option;
    int age, grade;
    char name[41];

    printf("Option 1: Validate age (between 18 and 80)\n");
    printf("Option 2: Validate grade (between 0 and 100)\n");
    printf("Option 3: Validate name (under 40 characters)\n");
    printf("Option 4: Exit\n");

    printf("Select an option: ");
    scanf("%d", &option);

    switch (option) {

        case 1:
            printf("Enter an age: ");
            scanf("%d", &age);

            while (age < 18 || age > 80) {
                printf("Invalid age. Enter a value between 18 and 80: ");
                scanf("%d", &age);
            }

            printf("Valid age.\n");
            break;

        case 2:
            printf("Enter a grade: ");
            scanf("%d", &grade);

            while (grade < 0 || grade > 100) {
                printf("Invalid grade. Enter a value between 0 and 100: ");
                scanf("%d", &grade);
            }

            printf("Valid grade.\n");
            break;

        case 3:
            printf("Enter a name: ");
            getchar();
            fgets(name, sizeof(name), stdin);

            /* Remove trailing newline */
            name[strcspn(name, "\n")] = '\0';

            while (strlen(name) >= 40) {
                printf("Name too long. Enter fewer than 40 characters: ");
                fgets(name, sizeof(name), stdin);
                name[strcspn(name, "\n")] = '\0';
            }

            printf("Valid name.\n");
            break;

        case 4:
            printf("Exiting program.\n");
            break;

        default:
            printf("Invalid option.\n");
    }

    getch();
    return 0;
}
