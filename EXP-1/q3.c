// Find the largest among three different numbers entered by user
#include <stdio.h>

int main() {
    int a, b, c;

    printf("Enter three different numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a > b && a > c) {
        printf("The largest number is: %d", a);
    } 
    else if (b > a && b > c) {
        printf("The largest number is: %d", b);
    } 
    else {
        printf("The largest number is: %d", c);
    }

    return 0;
}