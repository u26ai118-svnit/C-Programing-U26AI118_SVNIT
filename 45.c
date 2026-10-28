#include <stdio.h>

int main() {
    int arr[10], i, pos = 0, neg = 0, zero = 0;

    printf("Enter 10 integers:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] > 0) {
            pos++;
        } else if (arr[i] < 0) {
            neg++;
        } else {
            zero++;
        }
    }

    printf("Positive = %d\nNegative = %d\nZero = %d\n", pos, neg, zero);

    return 0;
}