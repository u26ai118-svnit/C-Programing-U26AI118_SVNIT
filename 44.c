#include <stdio.h>

int main() {
    int arr[10], i, odd = 0, even = 0;

    printf("Enter 10 integers:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] % 2 == 0) {
            even++;
        } else {
            odd++;
        }
    }

    printf("Total Even elements = %d\n", even);
    printf("Total Odd elements = %d\n", odd);

    return 0;
}