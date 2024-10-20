#include <stdio.h>
#include <limits.h>

void interchangeSecondLargestSmallest(int arr[], int n) {
    int firstLargest = INT_MIN, secondLargest = INT_MIN;
    int firstSmallest = INT_MAX, secondSmallest = INT_MAX;
    int *pSecondLargest, *pSecondSmallest;

    for (int i = 0; i < n; i++) {
        if (arr[i] > firstLargest) {
            secondLargest = firstLargest;
            firstLargest = arr[i];
        } else if (arr[i] > secondLargest && arr[i] != firstLargest) {
            secondLargest = arr[i];
            pSecondLargest = &arr[i];
        }

        if (arr[i] < firstSmallest) {
            secondSmallest = firstSmallest;
            firstSmallest = arr[i];
        } else if (arr[i] < secondSmallest && arr[i] != firstSmallest) {
            secondSmallest = arr[i];
            pSecondSmallest = &arr[i];
        }
    }

    int temp = *pSecondLargest;
    *pSecondLargest = *pSecondSmallest;
    *pSecondSmallest = temp;
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(arr[0]);

    interchangeSecondLargestSmallest(arr, n);

    printf("Modified array: ");
    for (int i = 0; i < n; i++) 
        printf("%d ", arr[i]);
    printf("\n");

    return 0;
}
