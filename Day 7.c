#include <stdio.h>

int main() {
    int year;

    // Input year from user
    printf("Enter a year: ");
    scanf("%d", &year);

    // Check if it is a leap year
    if (year % 400 == 0) {
        printf("%d is a leap year.\n", year);
    } 
    else if (year % 100 == 0) {
        printf("%d is not a leap year.\n", year);
    } 
    else if (year % 4 == 0) {
        printf("%d is a leap year.\n", year);
    } 
    else {
        printf("%d is not a leap year.\n", year);
    }

    return 0;
}
