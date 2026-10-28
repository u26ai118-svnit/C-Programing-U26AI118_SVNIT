#include <stdio.h>

int main() {
    char choice;
    float num1, num2;

    printf("Select operation:\n");
    printf("a. Addition\n");
    printf("s. Subtraction\n");
    printf("m. Multiplication\n");
    printf("d. Division\n");
    printf("Enter choice (a, s, m, d): ");
    scanf(" %c", &choice);

    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);

    switch (choice) {
        case 'a':
        case 'A':
            printf("Result = %.2f\n", num1 + num2);
            break;
        case 's':
        case 'S':
            printf("Result = %.2f\n", num1 - num2);
            break;
        case 'm':
        case 'M':
            printf("Result = %.2f\n", num1 * num2);
            break;
        case 'd':
        case 'D':
            if (num2 != 0) {
                printf("Result = %.2f\n", num1 / num2);
            } else {
                printf("Error: Division by zero.\n");
            }
            break;
        default:
            printf("Invalid choice!\n");
    }

    return 0;
}