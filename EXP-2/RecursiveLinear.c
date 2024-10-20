// Recursive Linear Search
#include <stdio.h>

int func(int arr[], int n, int target, int index) {
    if (index >= n) 
        return -1;
    if (arr[index] == target)
        return index;
    return func(arr, n, target, index + 1);
}

int main() {
    int arr[] = {87, 48, 75, 53, 10, 43, 90};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 10;
    int result = func(arr, n, target, 0);
    if (result != -1) {
        printf("Element found at index: %d", result);
    }
    else {
        printf("Element not found!!");
    }
    return 0;
}
