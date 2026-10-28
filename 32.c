#include <stdio.h>

int main() {
    int n, num, max1 = -9999, max2 = -9999, i;
    printf("Enter limit (N): ");
    scanf("%d", &n);
    
    for(i = 0; i < n; i++) {
        printf("Enter number: ");
        scanf("%d", &num);
        
        if(num > max1) {
            max2 = max1;
            max1 = num;
        } else if(num > max2 && num < max1) {
            max2 = num;
        }
    }
    
    printf("Max = %d\nSecond Max = %d\n", max1, max2);
    return 0;
}