#include <stdio.h>
#include <limits.h>

int kadane(int arr[], int n) {
    int max_current = 0, max_global = INT_MIN;

    for (int i = 0; i < n; i++) {
        max_current += arr[i];
        if (max_global < max_current) max_global = max_current;
        if (max_current < 0) max_current = 0;
    }
    return max_global;
}

int main() {
    int arr[] = {-2, -3, 4, -1, -2, 1, 5, -3};
    int n = sizeof(arr) / sizeof(arr[0]);

    int max_sum = kadane(arr, n);
    printf("Maximum subarray sum: %d\n", max_sum);

    return 0;
}
