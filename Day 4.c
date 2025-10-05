#include <stdio.h>

int main() {
    int a, b;

    // Input two numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    // Display before swapping
    printf("Before swapping: a = %d, b = %d\n", a, b);

    // Swap without third variable (using arithmetic)
    a = a + b;
    b = a - b;
    a = a - b;

    // Display after swapping
    printf("After swapping:  a = %d, b = %d\n", a, b);

    return 0;
}
