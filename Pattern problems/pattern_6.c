#include <stdio.h>

void pattern6(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (i == 1 || i == n || j == 1 || j == n)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }
}

int main() {
    int n = 5; // Example size
    pattern6(n);
    return 0;
}
