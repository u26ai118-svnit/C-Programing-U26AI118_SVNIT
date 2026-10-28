#include <stdio.h>

int main() {
    int hours, minutes, seconds;
    long total_seconds;

    printf("Enter Hours, Minutes, and Seconds (HH MM SS): ");
    scanf("%d %d %d", &hours, &minutes, &seconds);

    total_seconds = (hours * 3600) + (minutes * 60) + seconds;

    printf("Total Seconds = %ld\n", total_seconds);
    return 0;
}