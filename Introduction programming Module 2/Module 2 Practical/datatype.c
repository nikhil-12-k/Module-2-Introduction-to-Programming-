#include <stdio.h>

#define PI 3.1415  // Constant for PI

int main() {
    int age;
    char grade;
    float percentage;

    // Asking user to input values
    printf("Enter your age (integer): ");
    scanf("%d", &age);

    printf("Enter your grade (single character): ");
    scanf(" %c", &grade);  // Notice the space before %c to handle newline properly

    printf("Enter your percentage (float): ");
    scanf("%f", &percentage);

    // Displaying the constant and user-entered values
    printf("\n--- Displaying Values ---\n");
    printf("Value of constant PI: %.4f\n", PI);
    printf("Age (int): %d\n", age);
    printf("Grade (char): %c\n", grade);
    printf("Percentage (float): %.2f\n", percentage);

    return 0;
}
