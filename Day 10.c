//Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.

#include <stdio.h>

int main() {
    float side1, side2, side3;

    // Input the sides of the triangle
    printf("Enter three sides of the triangle: ");
    scanf("%f %f %f", &side1, &side2, &side3);

    // Check for valid triangle first using triangle inequality theorem
    if ((side1 + side2 > side3) && (side1 + side3 > side2) && (side2 + side3 > side1)) {

        // Classify the triangle
        if (side1 == side2 && side2 == side3) {
            printf("The triangle is Equilateral.\n");
        }
        else if (side1 == side2 || side1 == side3 || side2 == side3) {
            printf("The triangle is Isosceles.\n");
        }
        else {
            printf("The triangle is Scalene.\n");
        }

    } else {
        printf("The given sides do not form a valid triangle.\n");
    }

    return 0;
}
