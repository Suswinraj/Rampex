#include <stdio.h>

int main() {
    int a, b;

    // Input values
    printf("Enter value of a: ");
    scanf("%d", &a);

    printf("Enter value of b: ");
    scanf("%d", &b);

    // Swapping without a third variable
    a = a + b;
    b = a - b;
    a = a - b;

    // Output result
    printf("After swapping:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);

    return 0;
}
