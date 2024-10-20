// Iterative Binary Search
#include <stdio.h>

int func(int arr[], int n, int target) {
    int low = 0, high = n - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == target)
            return mid;
        else if (arr[mid] < target)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}

int main() {
    int arr[] = {87, 48, 75, 53, 10, 43, 90};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 53;
    int result = func(arr, n, target);
    if (result != -1) {
        printf("Element found at index: %d", result);
    } 
    else {
        printf("Element not found!!");
    }
    return 0;
}
