#include <stdio.h>

int main() {
    int a[10], b[10], temp, i;

    printf("Enter 10 elements for Array A:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter 10 elements for Array B:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &b[i]);
    }

    // Swapping elements one by one
    for (i = 0; i < 10; i++) {
        temp = a[i];
        a[i] = b[i];
        b[i] = temp;
    }

    printf("After swapping:\nArray A: ");
    for (i = 0; i < 10; i++) {
        printf("%d ", a[i]);
    }

    printf("\nArray B: ");
    for (i = 0; i < 10; i++) {
        printf("%d ", b[i]);
    }
    printf("\n");

    return 0;
}