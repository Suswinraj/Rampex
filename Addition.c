#include <stdio.h>

int main() {
    int num1, num2;
    int sum, difference, modulus;
    float division;

    // Input from user
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    // Addition
    sum = num1 + num2;

    // Subtraction
    difference = num1 - num2;

    // Division - check for division by zero
    if (num2 != 0) {
        division = (float)num1 / num2;
    } else {
        printf("Error: Division by zero is not allowed.\n");
        division = 0;
    }

    // Modulus - check for division by zero
    if (num2 != 0) {
        modulus = num1 % num2;
    } else {
        printf("Error: Modulus by zero is not allowed.\n");
        modulus = 0;
    }

    // Output results
    printf("Addition: %d + %d = %d\n", num1, num2, sum);
    printf("Subtraction: %d - %d = %d\n", num1, num2, difference);
    if (num2 != 0) {1
        printf("Division: %d / %d = %.2f\n", num1, num2, division);
        printf("Modulus: %d %% %d = %d\n", num1, num2, modulus);
    }

    return 0;
}
