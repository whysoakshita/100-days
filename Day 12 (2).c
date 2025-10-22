//Write a program to calculate electricity bill based on units consumed with these rates: 
//First 100 units at ₹5/unit 
//Next 100 units at ₹7/unit 
//Next 100 units at ₹10/unit 
//Above at ₹12/unit



#include <stdio.h>

int main() {
    int units;
    float bill = 0;

    // Input number of units consumed
    printf("Enter the number of units consumed: ");
    scanf("%d", &units);

    // Calculate bill based on given slabs
    if (units <= 100) {
        bill = units * 5;
    }
    else if (units <= 200) {
        bill = (100 * 5) + (units - 100) * 7;
    }
    else if (units <= 300) {
        bill = (100 * 5) + (100 * 7) + (units - 200) * 10;
    }
    else {
        bill = (100 * 5) + (100 * 7) + (100 * 10) + (units - 300) * 12;
    }

    // Display the total bill
    printf("Total Electricity Bill = ₹%.2f\n", bill);

    return 0;
}
