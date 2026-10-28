#include <stdio.h>

int main() {
    int n, i, max, sec_max;

    printf("Enter total number of elements (N): ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }


    if (arr[0] > arr[1]) {
        max = arr[0];
        sec_max = arr[1];
    } else {
        max = arr[1];
        sec_max = arr[0];
    }

    for (i = 2; i < n; i++) {
        if (arr[i] > max) {
            sec_max = max;
            max = arr[i];
        } else if (arr[i] > sec_max && arr[i] != max) {
            sec_max = arr[i];
        }
    }

    printf("Max = %d\n", max);
    printf("Second Max = %d\n", sec_max);

    return 0;
}