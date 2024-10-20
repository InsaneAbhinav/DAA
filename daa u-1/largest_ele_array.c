#include <stdio.h>

void findLargestThree(int arr[], int n) {
    int first = -1, second = -1, third = -1;
    for (int i = 0; i < n; i++) {
        if (arr[i] > first) {
            third = second;
            second = first;
            first = arr[i];
        } else if (arr[i] > second && arr[i] != first) {
            third = second;
            second = arr[i];
        } else if (arr[i] > third && arr[i] != second && arr[i] != first) {
            third = arr[i];
        }
    }
    printf("Three largest distinct elements: %d, %d, %d\n", first, second, third);
}

int main() {
    int arr[] = {10, 4, 3, 50, 23, 90};
    int n = sizeof(arr) / sizeof(arr[0]);
    findLargestThree(arr, n);
    return 0;
}
