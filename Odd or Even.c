#include <stdio.h>

int main() {
    int number;

    // Input a number
    printf("Enter an integer: ");
    scanf("%d", &number);

    // Check even or odd using modulus operator
    if (number % 2 == 0) {
        printf("%d is even.\n", number);
    } else {
        printf("%d is odd.\n", number);
    }

    return 0;
}
