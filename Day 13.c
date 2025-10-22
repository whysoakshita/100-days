//Write a program to implement a basic calculator using switch-case for +, -, *, /, %.


#include <stdio.h>

int main() {
    char operator;
    double num1, num2, result;

    // Input two numbers and operator
    printf("Enter first number: ");
    scanf("%lf", &num1);
    printf("Enter second number: ");
    scanf("%lf", &num2);
    printf("Enter an operator (+, -, *, /, %%): ");
    scanf(" %c", &operator); // space before %c to consume newline

    // Perform calculation using switch-case
    switch(operator) {
        case '+':
            result = num1 + num2;
            printf("Result: %.2lf\n", result);
            break;
        case '-':
            result = num1 - num2;
            printf("Result: %.2lf\n", result);
            break;
        case '*':
            result = num1 * num2;
            printf("Result: %.2lf\n", result);
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                printf("Result: %.2lf\n", result);
            } else {
                printf("Error: Division by zero!\n");
            }
            break;
        case '%':
            if ((int)num2 != 0) {
                printf("Result: %d\n", (int)num1 % (int)num2);
            } else {
                printf("Error: Division by zero!\n");
            }
            break;
        default:
            printf("Invalid operator!\n");
    }

    return 0;
}
