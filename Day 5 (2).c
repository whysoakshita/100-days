#include <stdio.h>

int main() {
    int total_seconds;
    int hours, minutes, seconds;

    // Input total time in seconds
    printf("Enter time in seconds: ");
    scanf("%d", &total_seconds);

    // Calculate hours, minutes, and seconds
    hours = total_seconds / 3600;            // 1 hour = 3600 seconds
    minutes = (total_seconds % 3600) / 60;   // Remaining seconds converted to minutes
    seconds = total_seconds % 60;            // Remaining seconds

    // Display result
    printf("Time is: %02d:%02d:%02d\n", hours, minutes, seconds);

    return 0;
}
