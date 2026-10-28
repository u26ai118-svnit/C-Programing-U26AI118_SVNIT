#include <stdio.h>

int main() {
    int a[3][3], i, j, max, min;

    printf("Enter elements of 3x3 matrix:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    max = a[0][0];
    min = a[0][0];

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            if (a[i][j] > max) {
                max = a[i][j];
            }
            if (a[i][j] < min) {
                min = a[i][j];
            }
        }
    }

    printf("Maximum element = %d\n", max);
    printf("Minimum element = %d\n", min);

    return 0;
}