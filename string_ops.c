/*
 * string_ops.c
 * Author: Gael Morales Hernandez
 *
 * Reads a word and prints its length, first 3 characters,
 * uppercase, lowercase, and replaces vowels with @.
 */
#include <stdio.h>
#include <conio.h>

int main() {
    char word[100];

    printf("Enter a word: ");
    scanf("%s", word);

    // Length
    int i = 0;
    while (word[i] != '\0') {
        i++;
    }
    printf("The length of the word is: %d\n", i);

    // First 3 characters
    printf("The first three characters are: ");
    for (int j = 0; j < 3 && word[j] != '\0'; j++) {
        printf("%c", word[j]);
    }
    printf("\n");

    // Uppercase (manual)
    printf("Uppercase: ");
    for (int j = 0; word[j] != '\0'; j++) {
        if (word[j] >= 'a' && word[j] <= 'z') {
            printf("%c", word[j] - 32);
        } else {
            printf("%c", word[j]);
        }
    }
    printf("\n");

    // Lowercase (manual)
    printf("Lowercase: ");
    for (int j = 0; word[j] != '\0'; j++) {
        if (word[j] >= 'A' && word[j] <= 'Z') {
            printf("%c", word[j] + 32);
        } else {
            printf("%c", word[j]);
        }
    }
    printf("\n");

    // Replace vowels with @
    printf("Replacing vowels with @: ");
    for (int j = 0; word[j] != '\0'; j++) {
        char c = word[j];
        if (c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||
            c=='A'||c=='E'||c=='I'||c=='O'||c=='U') {
            printf("@");
        } else {
            printf("%c", c);
        }
    }

    return 0;
}
