// Recursive Bnary Search
#include <stdio.h>

int func(int arr[], int low, int high, int target) {
    if (low > high)
        return -1;

    int mid = low + (high - low) / 2;

    if (arr[mid] == target)
        return mid;
    else if (arr[mid] < target)
        return func(arr, mid + 1, high, target);
    else
        return func(arr, low, mid - 1, target);
}

int main() {
    int arr[] = {87, 48, 75, 53, 10, 43, 90};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 53;
    int result = func(arr, 0, n - 1, target);
    if (result != -1) {
        printf("Element found at index: %d", result);
    } 
    else {
        printf("Element not found!!");
    }
    return 0;
}
