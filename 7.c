#include <stdio.h>

int main() {
    float M, P, C, E, CM; // Marks out of 200 for M, P, C and 100 for E[cite: 1]

    printf("Enter Mathematics marks (out of 200): ");
    scanf("%f", &M);
    printf("Enter Physics marks (out of 200): ");
    scanf("%f", &P);
    printf("Enter Chemistry marks (out of 200): ");
    scanf("%f", &C);
    printf("Enter Entrance Examination marks (out of 100): ");
    scanf("%f", &E);

    // Formula: CM = M/2 + P/2 + C/2 + E[cite: 1]
    CM = (M / 2.0) + (P / 2.0) + (C / 2.0) + E;

    printf("Cut-off Mark (CM) = %.2f\n", CM);
    return 0;
}