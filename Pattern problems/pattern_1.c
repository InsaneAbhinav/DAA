#include <stdio.h>

void pattern1(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }
}

int main() {
    int n = 5; // Example size
    pattern1(n);
    return 0;
}
