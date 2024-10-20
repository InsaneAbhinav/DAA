// Abhinav Singla
// Sap 500120278


#include <stdio.h>

// Problem 1: Find the number of rotations in a circularly sorted array
int findRotations(int arr[], int n) {
    int low = 0, high = n - 1;
    while (low <= high) {
        if (arr[low] <= arr[high])
            return low;

        int mid = low + (high - low) / 2;
        int next = (mid + 1) % n;
        int prev = (mid - 1 + n) % n;

        if (arr[mid] <= arr[next] && arr[mid] <= arr[prev])
            return mid;

        if (arr[mid] >= arr[low])
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}

// Problem 2: Search an element in a circularly sorted array
int searchInCircularArray(int arr[], int n, int key) {
    int low = 0, high = n - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == key)
            return mid;

        if (arr[low] <= arr[mid]) {
            if (key >= arr[low] && key < arr[mid])
                high = mid - 1;
            else
                low = mid + 1;
        } else {
            if (key > arr[mid] && key <= arr[high])
                low = mid + 1;
            else
                high = mid - 1;
        }
    }
    return -1;
}

// Problem 3: Find the first or last occurrence of a given number in a sorted array
int findOccurrence(int arr[], int n, int key, int isFirst) {
    int low = 0, high = n - 1, result = -1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == key) {
            result = mid;
            if (isFirst)
                high = mid - 1; // Move to the left half for the first occurrence
            else
                low = mid + 1;  // Move to the right half for the last occurrence
        } else if (arr[mid] < key) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return result;
}

// Problem 4: Count occurrences of a number in a sorted array with duplicates
int countOccurrences(int arr[], int n, int key) {
    int first = findOccurrence(arr, n, key, 1);
    if (first == -1)
        return 0;
    int last = findOccurrence(arr, n, key, 0);
    return last - first + 1;
}

// Problem 5: Find the smallest missing element from a sorted array
int findSmallestMissingElement(int arr[], int n) {
    int low = 0, high = n - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == mid + 1) // Check for missing number
            low = mid + 1;
        else
            high = mid - 1;
    }
    return low + 1;
}

// Problem 6: Find floor and ceil of a number in a sorted integer array
void findFloorAndCeil(int arr[], int n, int key, int *floor, int *ceil) {
    int low = 0, high = n - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == key) {
            *floor = arr[mid];
            *ceil = arr[mid];
            return;
        } else if (arr[mid] < key) {
            *floor = arr[mid];
            low = mid + 1;
        } else {
            *ceil = arr[mid];
            high = mid - 1;
        }
    }
}

// Problem 7: Find the number of 1's in a sorted binary array
int countOnesInBinaryArray(int arr[], int n) {
    int low = 0, high = n - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == 0)
            low = mid + 1;
        else if (arr[mid] == 1)
            high = mid - 1;
    }
    return n - low;
}

// Problem 8: Find the peak element in an array
int findPeakElement(int arr[], int n) {
    int low = 0, high = n - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if ((mid == 0 || arr[mid - 1] <= arr[mid]) &&
            (mid == n - 1 || arr[mid + 1] <= arr[mid]))
            return mid;
        if (mid > 0 && arr[mid - 1] > arr[mid])
            high = mid - 1;
        else
            low = mid + 1;
    }
    return -1;
}

// Problem 9: Find the square root of a number using binary search
double squareRoot(int x) {
    double low = 0, high = x, mid;
    double precision = 0.00001; // Set the desired precision

    while ((high - low) > precision) {
        mid = (low + high) / 2.0;
        if (mid * mid == x)
            return mid;
        if (mid * mid < x)
            low = mid;
        else
            high = mid;
    }
    return (low + high) / 2.0;
}

// Main function
int main() {
    // Problem 1: Number of rotations
    int arr1[] = {15, 18, 2, 3, 6, 12};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    printf("Input Array: ");
    for (int i = 0; i < n1; i++) printf("%d ", arr1[i]);
    printf("\nNumber of rotations: %d\n\n", findRotations(arr1, n1));

    // Problem 2: Search element in a circularly sorted array
    int key2 = 3;
    printf("Input Array: ");
    for (int i = 0; i < n1; i++) printf("%d ", arr1[i]);
    printf("\nSearching for %d: Element found at index: %d\n\n", key2, searchInCircularArray(arr1, n1, key2));

    // Problem 3: First and Last Occurrence of a number
    int arr2[] = {1, 2, 2, 2, 3, 4, 5};
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    int key = 2;
    printf("Input Array: ");
    for (int i = 0; i < n2; i++) printf("%d ", arr2[i]);
    printf("\nFirst occurrence of %d: %d\n", key, findOccurrence(arr2, n2, key, 1));
    printf("Last occurrence of %d: %d\n\n", key, findOccurrence(arr2, n2, key, 0));

    // Problem 4: Count Occurrences
    printf("Input Array: ");
    for (int i = 0; i < n2; i++) printf("%d ", arr2[i]);
    printf("\nOccurrences of %d: %d\n\n", key, countOccurrences(arr2, n2, key));

    // Problem 5: Smallest missing element
    int arr3[] = {1, 2, 3, 4, 6, 7};
    int n3 = sizeof(arr3) / sizeof(arr3[0]);
    printf("Input Array: ");
    for (int i = 0; i < n3; i++) printf("%d ", arr3[i]);
    printf("\nSmallest missing element: %d\n\n", findSmallestMissingElement(arr3, n3));

    // Problem 6: Floor and Ceil of a number
    int floor, ceil;
    findFloorAndCeil(arr3, n3, 5, &floor, &ceil);
    printf("Input Array: ");
    for (int i = 0; i < n3; i++) printf("%d ", arr3[i]);
    printf("\nFloor: %d, Ceil: %d\n\n", floor, ceil);

    // Problem 7: Count of 1's in binary array
    int arr4[] = {0, 0, 1, 1, 1, 1};
    int n4 = sizeof(arr4) / sizeof(arr4[0]);
    printf("Input Array: ");
    for (int i = 0; i < n4; i++) printf("%d ", arr4[i]);
    printf("\nNumber of 1's: %d\n\n", countOnesInBinaryArray(arr4, n4));

    // Problem 8: Peak Element
    int arr5[] = {1, 3, 20, 4, 1};
    int n5 = sizeof(arr5) / sizeof(arr5[0]);
    printf("Input Array: ");
    for (int i = 0; i < n5; i++) printf("%d ", arr5[i]);
    printf("\nPeak element is at index %d with value %d\n\n", findPeakElement(arr5, n5), arr5[findPeakElement(arr5, n5)]);

    // Problem 9: Square Root
    int num = 50;
    printf("Input number: %d\nSquare root of %d is %.5f\n", num, num, squareRoot(num));

    return 0;
}
