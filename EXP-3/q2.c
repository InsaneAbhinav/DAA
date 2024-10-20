// first n Fibonacci numbers using recursion
#include <stdio.h>

int fibo(int n) {
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    return fibo(n - 1) + fibo(n - 2);
}

int main() {
    int n;
    printf("Enter value of n:");
    scanf("%d", &n);
    printf("First %d Fibonacci numbers:\n", n);
    for (int i = 0; i < n; i++) {
        printf("%d ", fibo(i));
    }
    printf("\n");
    return 0;
}
