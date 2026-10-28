#include <stdio.h>

int main() {
    int n, num, max = -9999, min = 9999, i;
    printf("Enter limit (N): ");
    scanf("%d", &n);
    
    for(i = 0; i < n; i++) {
        printf("Enter number: ");
        scanf("%d", &num);
        
        if(i == 0) { 
            max = num; 
            min = num; 
        }
       
        if(num > max) max = num;
        if(num < min) min = num;
    }
    
    printf("Max = %d\nMin = %d\n", max, min);
    return 0;
}   