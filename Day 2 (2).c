#include <stdio.h>
#define PI 3.14159   // Defining the value of π

int main() {
    float radius, area, circumference;

    // Input radius
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    // Calculations
    area = PI * radius * radius;          // Formula: πr²
    circumference = 2 * PI * radius;      // Formula: 2πr

    // Output results
    printf("Area of the circle = %.2f\n", area);
    printf("Circumference of the circle = %.2f\n", circumference);

    return 0;
}

