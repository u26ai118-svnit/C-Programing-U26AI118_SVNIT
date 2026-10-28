#include <stdio.h>

int main() {
    int n, i, j;
    double sum = 0.0, fact;
    
    printf("Enter the number of terms (N): ");
    scanf("%d", &n);
    
    for (i = 1; i <= n; i++) {
        fact = 1.0;
        for (j = 1; j <= i; j++) {
            fact *= j;
        }
        sum += (double)i / fact;
    }
    printf("Sum of the series up to %d terms = %.4f\n", n, sum);
    return 0;
}