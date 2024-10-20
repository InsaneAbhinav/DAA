// Find all the roots of a quadratic equation ax2+bx+c=0

#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, d, r1, r2;
    printf("Enter coefficients a, b and c: ");
    scanf("%f %f %f", &a, &b, &c);

    
    d = b * b - 4 * a * c;

    if (d >= 0) {

        if (d > 0) {
           r1 = (-b + sqrt(d)) / (2 * a);
            r2 = (-b - sqrt(d)) / (2 * a);
            printf("Roots are real and different\n");
            printf("Root1 = %.2f\nRoot2 = %.2f", r1, r2);
        }
 
        else {
            r1 = -b / (2 * a);
            printf("Roots are real and the same:\n");
            printf("Root 1 = Root 2 = %.2f", r1);
        }
    } else {
        printf("No real roots exist as the discriminant is negative.");
    }

    return 0;
}
