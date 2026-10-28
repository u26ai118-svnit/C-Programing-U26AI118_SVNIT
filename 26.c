#include <stdio.h>

int main() {
    int n, i, sumEven = 0, sumOdd = 0;
    printf("Enter the limit N: ");
    scanf("%d", &n);
    
    for(i = 1; i <= n; i++) {
        if(i % 2 == 0) {
            sumEven += i;
        } else {
            sumOdd += i;
        }
    }
    printf("Sum of Even = %d\nSum of Odd = %d\n", sumEven, sumOdd);
    return 0;
}