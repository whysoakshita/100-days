#include <stdio.h>

int main() {
    int n, sum = 0;

    // Input value of n
    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Calculate sum of first n natural numbers
    for (int i = 1; i <= n; i++) {
        sum = sum + i;
    }

    // Display the result
    printf("The sum of the first %d natural numbers is: %d\n", n, sum);

    return 0;
}

