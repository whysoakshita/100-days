//Write a program to input two numbers and display their sum, difference, product, and quotient.

#include <stdio.h>

int main() {
    int num1, num2;
    int sum, difference, product;
    float quotient;

    // Input two numbers
    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    // Calculations
    sum = num1 + num2;
    difference = num1 - num2;
    product = num1 * num2;

    if (num2 != 0) {
        quotient = (float) num1 / num2;  // typecast to float for decimal result
    } else {
        printf("Division by zero is not allowed.\n");
        quotient = 0;
    }

    // Display results
    printf("Sum = %d\n", sum);
    printf("Difference = %d\n", difference);
    printf("Product = %d\n", product);
    if (num2 != 0)
        printf("Quotient = %.2f\n", quotient);

    return 0;
}
