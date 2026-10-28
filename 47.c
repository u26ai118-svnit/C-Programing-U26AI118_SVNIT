#include <stdio.h>

int main() {
    int a[10], b[10], c[10], i;

    printf("Enter 10 elements for first array:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter 10 elements for second array:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &b[i]);
    }

    printf("Addition stored in third array:\n");
    for (i = 0; i < 10; i++) {
        c[i] = a[i] + b[i];
        printf("%d ", c[i]);
    }
    printf("\n");

    return 0;
}