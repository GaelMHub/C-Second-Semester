/*
 * shapes_area.c
 * Author: Gael Morales Hernandez
 *
 * Menu-driven program that calculates the area of squares,
 * rectangles, circles, and triangles using separate functions.
 */
#include <stdio.h>
#include <conio.h>

float pi = 3.1416;
int option = 0;

void showMenu(void);
void squareArea(void);
void rectangleArea(void);
void circleArea(void);
void triangleArea(void);
float validatePositive(void);

int main() {

    showMenu();

    return 0;
}

void showMenu(void) {

    do {

        printf("\n=== MENU ===\n");
        printf("1. Area of a Square\n");
        printf("2. Area of a Rectangle\n");
        printf("3. Area of a Circle\n");
        printf("4. Area of a Triangle\n");
        printf("5. Exit\n");

        printf("Enter an option: ");
        scanf("%d", &option);

        switch(option) {

            case 1:
                squareArea();
                break;

            case 2:
                rectangleArea();
                break;

            case 3:
                circleArea();
                break;

            case 4:
                triangleArea();
                break;

            case 5:
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid option\n");
        }

    } while(option != 5);
}

float validatePositive() {

    float number;

    do {
        scanf("%f", &number);

        if(number <= 0) {
            printf("Error. Enter a positive number: ");
        }

    } while(number <= 0);

    return number;
}

void squareArea() {

    float side, area;

    printf("Enter the side of the square: ");
    side = validatePositive();

    area = side * side;

    printf("The area of the square is: %.2f\n", area);
}

void rectangleArea() {

    float base, height, area;

    printf("Enter the base of the rectangle: ");
    base = validatePositive();

    printf("Enter the height of the rectangle: ");
    height = validatePositive();

    area = base * height;

    printf("The area of the rectangle is: %.2f\n", area);
}

void circleArea() {

    float radius, area;

    printf("Enter the radius of the circle: ");
    radius = validatePositive();

    area = pi * radius * radius;

    printf("The area of the circle is: %.2f\n", area);
}

void triangleArea() {

    float base, height, area;

    printf("Enter the base of the triangle: ");
    base = validatePositive();

    printf("Enter the height of the triangle: ");
    height = validatePositive();

    area = (base * height) / 2;

    printf("The area of the triangle is: %.2f\n", area);
}
