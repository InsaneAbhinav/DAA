#include <stdio.h>

void pattern8(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (j == i || j == n - i + 1)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}

int main() {
    int n = 5; // Example size
    pattern8(n);
    return 0;
}
