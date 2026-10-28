#include <stdio.h>

int main() {
    long total_seconds;
    int hours, minutes, seconds;

    printf("Enter Total Seconds: ");
    scanf("%ld", &total_seconds);

    hours = total_seconds / 3600;
    minutes = (total_seconds % 3600) / 60;
    seconds = total_seconds % 60;

    printf("Time format (HH:MM:SS) = %02d:%02d:%02d\n", hours, minutes, seconds);
    return 0;
}