/*
 * grade_stats.c
 * Author: Gael Morales Hernandez
 *
 * Reads a series of grades (0-100) entered by the user and computes:
 * total count, pass/fail counts, overall average, pass average,
 * fail average, and pass/fail percentages.
 */

#include <stdio.h>
#include <conio.h>

int main() {
    int option = 0, option2;
    int total_count = 0;
    int pass_count = 0, fail_count = 0;
    int grade;
    int total_sum = 0, pass_sum = 0, fail_sum = 0;
    float total_avg, pass_avg, fail_avg;
    float pass_pct, fail_pct;

    printf("GRADE STATISTICS SYSTEM\n");
    printf("=======================\n");
    printf("Option 1: Enter grades\n");
    printf("Option 2: Exit and view results\n");

    printf("Select an option: ");
    scanf("%d", &option);

    if (option == 1) {
        do {
            printf("Enter a grade (0-100): ");
            scanf("%d", &grade);

            if (grade >= 0 && grade <= 100) {
                total_count++;
                total_sum += grade;

                if (grade >= 60) {
                    pass_count++;
                    pass_sum += grade;
                } else {
                    fail_count++;
                    fail_sum += grade;
                }
            } else {
                printf("Grade must be between 0 and 100.\n");
            }

            printf("Continue?\n");
            printf("Option 1: Enter another grade\n");
            printf("Option 2: Exit and view results\n");
            scanf("%d", &option2);

        } while (option2 == 1);
    }

    printf("\nRESULTS\n");
    printf("Total grades entered : %d\n", total_count);
    printf("Passing              : %d\n", pass_count);
    printf("Failing              : %d\n", fail_count);

    if (total_count > 0) {
        total_avg = (float)total_sum / total_count;
        printf("Overall average      : %.2f\n", total_avg);

        if (pass_count > 0) {
            pass_avg = (float)pass_sum / pass_count;
            printf("Passing average      : %.2f\n", pass_avg);
        } else {
            printf("Passing average      : N/A\n");
        }

        if (fail_count > 0) {
            fail_avg = (float)fail_sum / fail_count;
            printf("Failing average      : %.2f\n", fail_avg);
        } else {
            printf("Failing average      : N/A\n");
        }

        pass_pct = ((float)pass_count / total_count) * 100;
        fail_pct = ((float)fail_count / total_count) * 100;

        printf("Pass rate            : %.2f%%\n", pass_pct);
        printf("Fail rate            : %.2f%%\n", fail_pct);
    } else {
        printf("No grades were entered.\n");
    }

    getch();
    return 0;
}
