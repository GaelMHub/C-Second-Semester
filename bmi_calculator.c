/*
 * bmi_calculator.c
 * Author: Gael Morales Hernandez
 *
 * Calculates BMI based on user input (weight, height, sex).
 * Uses sex-specific thresholds to provide a diagnosis.
 * Validates all inputs before processing.
 */

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

/*
 * male_bmi
 * Calculates and diagnoses BMI using male-specific thresholds.
 */
void male_bmi(float weight, float height) {
    float bmi = weight / (height * height);

    printf("BMI: %.2f\n", bmi);

    if (bmi < 20) {
        printf("Diagnosis: Underweight\n");
    } else if (bmi < 25) {
        printf("Diagnosis: Normal weight\n");
    } else if (bmi < 30) {
        printf("Diagnosis: Overweight\n");
    } else if (bmi < 40) {
        printf("Diagnosis: Obese\n");
    } else {
        printf("Diagnosis: Severely obese\n");
    }
}

/*
 * female_bmi
 * Calculates and diagnoses BMI using female-specific thresholds.
 */
void female_bmi(float weight, float height) {
    float bmi = weight / (height * height);

    printf("BMI: %.2f\n", bmi);

    if (bmi < 19) {
        printf("Diagnosis: Underweight\n");
    } else if (bmi < 23) {
        printf("Diagnosis: Normal weight\n");
    } else if (bmi < 27) {
        printf("Diagnosis: Overweight\n");
    } else if (bmi < 32) {
        printf("Diagnosis: Obese\n");
    } else {
        printf("Diagnosis: Severely obese\n");
    }
}

int main() {
    int age, sex;
    char name[50];
    float weight, height;

    printf("Enter your name: ");
    scanf("%s", name);

    do {
        printf("Enter your age: ");
        scanf("%d", &age);
    } while (age < 1 || age > 120);

    do {
        printf("Enter your height in meters: ");
        scanf("%f", &height);
    } while (height < 0.50 || height > 2.50);

    do {
        printf("Enter your weight in kilograms: ");
        scanf("%f", &weight);
    } while (weight < 20 || weight > 300);

    printf("\nSelect your sex:\n");
    printf("1. Male\n");
    printf("2. Female\n");
    scanf("%d", &sex);

    system("cls");

    printf("========================================\n");
    printf("         BMI DIAGNOSTIC REPORT\n");
    printf("========================================\n");
    printf("Patient : %s\n", name);
    printf("Age     : %d years\n", age);
    printf("Weight  : %.2f kg\n", weight);
    printf("Height  : %.2f m\n", height);
    printf("\nRESULTS:\n");

    switch (sex) {
        case 1:
            male_bmi(weight, height);
            break;
        case 2:
            female_bmi(weight, height);
            break;
        default:
            printf("Invalid sex option.\n");
    }

    printf("========================================\n");

    getch();
    return 0;
}
