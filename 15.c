#include <stdio.h>

int main() {
    float m1, m2, m3, m4, m5, total, percentage;

    printf("Enter marks of 5 subjects: ");
    scanf("%f %f %f %f %f", &m1, &m2, &m3, &m4, &m5);

    total = m1 + m2 + m3 + m4 + m5;
    percentage = (total / 500.0) * 100.0;

    printf("Percentage = %.2f%%\n", percentage);

    if (percentage >= 60.0) {
        printf("Division: First Division\n");
    } else if (percentage >= 50.0) {
        printf("Division: Second Division\n");
    } else if (percentage >= 40.0) {
        printf("Division: Third Division\n");
    } else {
        printf("Division: Fail\n");
    }

    return 0;
}