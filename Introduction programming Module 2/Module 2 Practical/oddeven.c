#include <stdio.h>

int main() {
    int number, month;

    // Check if the number is even or odd
    printf("Enter a number: ");
    scanf("%d", &number);

    if (number % 2 == 0) {
        printf("%d is Even.\n", number);
    } else {
        printf("%d is Odd.\n", number);
    }

    // Ask user to enter month number
    printf("\nEnter month number (1-12): ");
    scanf("%d", &month);

    // Display month name using switch statement
    switch (month) {
        case 1:
            printf("Month: January\n");
            break;
        case 2:
            printf("Month: February\n");
            break;
        case 3:
            printf("Month: March\n");
            break;
        case 4:
            printf("Month: April\n");
            break;
        case 5:
            printf("Month: May\n");
            break;
        case 6:
            printf("Month: June\n");
            break;
        case 7:
            printf("Month: July\n");
            break;
        case 8:
            printf("Month: August\n");
            break;
        case 9:
            printf("Month: September\n");
            break;
        case 10:
            printf("Month: October\n");
            break;
        case 11:
            printf("Month: November\n");
            break;
        case 12:
            printf("Month: December\n");
            break;
        default:
            printf("Invalid month number! Please enter a number between 1 and 12.\n");
    }

    return 0;
}
