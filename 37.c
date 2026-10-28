#include <stdio.h>

int main() {
    int n, i;
    
    printf("Enter the value of N: ");
    scanf("%d", &n);
    
    printf("The series is: ");
    for (i = 2; i <= n; i += 2) {
        printf("%d", i);
        if (i + 2 <= n) {
            printf(", ");
        }
    }
    printf("\n");
    
    return 0;
}