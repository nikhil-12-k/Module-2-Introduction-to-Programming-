#include <stdio.h>

int main() {
    int num1, num2;

    // Input two integers from the user
    printf("Enter first integer: ");
    scanf("%d", &num1);
    printf("Enter second integer: ");
    scanf("%d", &num2);

    // Arithmetic Operations
    printf("\n--- Arithmetic Operations ---\n");
    printf("Addition: %d + %d = %d\n", num1, num2, num1 + num2);
    printf("Subtraction: %d - %d = %d\n", num1, num2, num1 - num2);
    printf("Multiplication: %d * %d = %d\n", num1, num2, num1 * num2);
    if (num2 != 0) {
        printf("Division: %d / %d = %d\n", num1, num2, num1 / num2);
        printf("Modulus: %d %% %d = %d\n", num1, num2, num1 % num2);
    } else {
        printf("Division and Modulus cannot be performed as second number is 0.\n");
    }

    // Relational Operations
    printf("\n--- Relational Operations ---\n");
    printf("%d == %d : %d\n", num1, num2, num1 == num2);
    printf("%d != %d : %d\n", num1, num2, num1 != num2);
    printf("%d > %d  : %d\n", num1, num2, num1 > num2);
    printf("%d < %d  : %d\n", num1, num2, num1 < num2);
    printf("%d >= %d : %d\n", num1, num2, num1 >= num2);
    printf("%d <= %d : %d\n", num1, num2, num1 <= num2);

    // Logical Operations
    printf("\n--- Logical Operations ---\n");
    printf("(%d != 0) && (%d != 0) : %d\n", num1, num2, (num1 != 0) && (num2 != 0));
    printf("(%d != 0) || (%d != 0) : %d\n", num1, num2, (num1 != 0) || (num2 != 0));
    printf("!(%d != 0) : %d\n", num1, !(num1 != 0));
    printf("!(%d != 0) : %d\n", num2, !(num2 != 0));

    return 0;
}
