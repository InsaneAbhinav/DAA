//Calculate the remainder, and the quotient of two given numbers
#include <stdio.h>

int main() {
    int a, b;

    printf("Enter dividend: ");
    scanf("%d", &a);
    printf("Enter divisor: ");
    scanf("%d", &b);

    if (b == 0) {
        printf("Error: Division by zero is not allowed.");
    }
     else {
        printf("Quotient = %d\n Remainder = %d", a / b, a % b);
    }

    return 0;
}
