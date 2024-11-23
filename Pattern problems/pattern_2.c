#include <stdio.h>

void pattern2(int n) {
    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }
}

int main() {
    int n = 5; // Example size
    pattern2(n);
    return 0;
}
