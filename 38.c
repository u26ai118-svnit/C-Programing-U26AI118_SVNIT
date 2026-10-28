#include <stdio.h>

int main() {
    int n, i = 1;
    
    printf("Enter the limit N: ");
    scanf("%d", &n);
    
    printf("The series is: ");
    while (i * i <= n) {
        printf("%d", i * i);
        if ((i + 1) * (i + 1) <= n) {
            printf(", ");
        }
        i++;
    }
    printf("\n");
    
    return 0;
}