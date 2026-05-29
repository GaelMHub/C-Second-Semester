/*
 * atm_machine.c
 * Author: Gael Morales Hernandez
 *
 * Simulates an ATM with options to check balance, deposit, and withdraw money.
 * Validates amounts and checks for sufficient funds.
 */
#include <stdio.h>
#include <conio.h>

int main() {
    int option;
    int deposit, withdrawal;
    float balance = 5000.0;

    // Main menu
    do {
        printf("\n=== ATM MACHINE ===\n");
        printf("1. Check balance\n");
        printf("2. Deposit money\n");
        printf("3. Withdraw money\n");
        printf("4. Exit\n");
        printf("Select an option: ");
        scanf("%d", &option);

        switch (option) {

            case 1:
                printf("Current balance: $%.2f MXN\n", balance);
                break;

            case 2:
                do {
                    printf("Enter amount to deposit: ");
                    scanf("%d", &deposit);

                    if (deposit < 100 || deposit > 20000 || deposit % 100 != 0) {
                        printf("Invalid amount. Must be a multiple of 100 between $100 and $20,000.\n");
                    }

                } while (deposit < 100 || deposit > 20000 || deposit % 100 != 0);

                balance += deposit;
                printf("Deposit successful. New balance: $%.2f MXN\n", balance);
                break;

            case 3:
                do {
                    printf("Enter amount to withdraw: ");
                    scanf("%d", &withdrawal);

                    if (withdrawal < 50 || withdrawal > 5000 || withdrawal % 50 != 0) {
                        printf("Invalid amount. Must be a multiple of 50 between $50 and $5,000.\n");
                    } else if (withdrawal > balance) {
                        printf("Insufficient funds.\n");
                    }

                } while (withdrawal < 50 || withdrawal > 5000 || withdrawal % 50 != 0 || withdrawal > balance);

                balance -= withdrawal;
                printf("Withdrawal successful. New balance: $%.2f MXN\n", balance);
                break;

            case 4:
                printf("\nThank you for using the ATM.\n");
                printf("Final balance: $%.2f MXN\n", balance);
                break;

            default:
                printf("Invalid option. Please try again.\n");
        }

    } while (option != 4);

    return 0;
}
