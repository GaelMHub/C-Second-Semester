/*
 * student_grades.c
 * Author: Gael Morales Hernandez
 *
 * Manages a 3-student grade matrix with a menu to enter data,
 * display results, calculate averages, and find the highest grade.
 */
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    struct record {
        char name[50];
        float grade[4];
    };

    struct record matrix[3];

    int option;
    int i, j;

    do {
        printf("\033[H\033[J");

        printf("=== Grade Average Program ===\n\n");

        printf("1- Enter grades\n");
        printf("2- Show full matrix\n");
        printf("3- Average per student\n");
        printf("4- Average per subject\n");
        printf("5- Highest grade and its position\n");
        printf("6- Exit\n\n");

        printf("Enter an option: ");
        scanf("%d", &option);

        getchar();

        switch(option)
        {
            case 1:
                printf("\033[H\033[J");

                for(i = 0; i < 3; i++) {
                    printf("\nStudent %d\n", i + 1);

                    printf("Name: ");
                    scanf("%s", matrix[i].name);

                    for(j = 0; j < 4; j++) {
                        printf("Grade %d: ", j + 1);
                        scanf("%f", &matrix[i].grade[j]);
                    }
                }

                printf("\nData entered successfully...\n");
                printf("Press Enter to continue...");
                getchar();
                break;

            case 2:
                printf("\033[H\033[J");

                printf("\nSaved data:\n");
                for(i = 0; i < 3; i++) {
                    printf("%s: ", matrix[i].name);

                    for(j = 0; j < 4; j++) {
                        printf("%.2f ", matrix[i].grade[j]);
                    }
                    printf("\n");
                }

                printf("\nPress Enter to continue...");
                getchar();
                break;

            case 3:
                printf("\033[H\033[J");

                for(i = 0; i < 3; i++) {
                    float sum = 0;

                    for(j = 0; j < 4; j++) {
                        sum += matrix[i].grade[j];
                    }

                    float average = sum / 4;

                    printf("Average of %s is: %.2f\n", matrix[i].name, average);
                }

                printf("\nPress Enter to continue...");
                getchar();
                break;

            case 4:
                printf("\033[H\033[J");

                for(j = 0; j < 4; j++) {
                    float sum = 0;

                    for(i = 0; i < 3; i++) {
                        sum += matrix[i].grade[j];
                    }

                    float average = sum / 3;

                    printf("Average of subject %d: %.2f\n", j + 1, average);
                }

                printf("\nPress Enter to continue...");
                getchar();
                break;

            case 5:
            {
                printf("\033[H\033[J");

                float highest = matrix[0].grade[0];
                int student = 0, subject = 0;

                for(i = 0; i < 3; i++) {
                    for(j = 0; j < 4; j++) {
                        if(matrix[i].grade[j] > highest) {
                            highest = matrix[i].grade[j];
                            student = i;
                            subject = j;
                        }
                    }
                }

                printf("The highest grade is: %.2f\n", highest);
                printf("Student: %s\n", matrix[student].name);
                printf("Position -> Student %d, Subject %d\n", student + 1, subject + 1);

                printf("\nPress Enter to continue...");
                getchar();
                break;
            }

            case 6:
                printf("Exiting...\n");
                break;
        }

    } while(option != 6);

    return 0;
}
