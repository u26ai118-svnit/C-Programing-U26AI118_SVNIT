#include <stdio.h>

int main() {
    float x, Y;
    int n, i;

    printf("Enter value of x: ");
    scanf("%f", &x);
    printf("Enter value of n: ");
    scanf("%d", &n);

    if (n == 1) {
        Y = 1.0 + x;
    } else if (n == 2) {
        Y = 1.0 + (x / n);
    } else if (n == 3) {
        float x_pow_n = 1.0;
        for (i = 1; i <= n; i++) {
            x_pow_n *= x;
        }
        Y = 1.0 + x_pow_n;
    } else {
        Y = 1.0 + (n * x);
    }

    printf("Y(%.2f, %d) = %.2f\n", x, n, Y);
    return 0;
}