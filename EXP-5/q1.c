#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition_first(int arr[], int low, int high) {
    int pivot = arr[low];
    int i = low + 1, j = high;

    while (i <= j) {
        while (i <= high && arr[i] <= pivot) i++;
        while (arr[j] > pivot) j--;
        if (i < j) swap(&arr[i], &arr[j]);
    }
    swap(&arr[low], &arr[j]);
    return j;
}

int partition_last(int arr[], int low, int high) {
    swap(&arr[low], &arr[high]); // Move last element to the first
    return partition_first(arr, low, high);
}

int partition_middle(int arr[], int low, int high) {
    int mid = low + (high - low) / 2;
    swap(&arr[low], &arr[mid]);
    return partition_first(arr, low, high);
}

// Partition using random element as pivot
int partition_random(int arr[], int low, int high) {
    int random = low + rand() % (high - low + 1);
    swap(&arr[low], &arr[random]);
    return partition_first(arr, low, high);
}

// Quicksort function
void quicksort(int arr[], int low, int high, int pivot_strategy) {
    if (low < high) {
        int p;
        switch (pivot_strategy) {
            case 1: p = partition_first(arr, low, high); break;
            case 2: p = partition_last(arr, low, high); break;
            case 3: p = partition_middle(arr, low, high); break;
            case 4: p = partition_random(arr, low, high); break;
        }
        quicksort(arr, low, p - 1, pivot_strategy);
        quicksort(arr, p + 1, high, pivot_strategy);
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}


int main() {
    int arr[] = {10, 7, 8, 9, 1, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    srand(time(0));

    printf("Original array: ");
    printArray(arr, n);

    for (int i = 1; i <= 4; i++) {
        int arr_copy[] = {10, 7, 8, 9, 1, 5}; // Reset array
        printf("\nQuicksort with pivot strategy %d:\n", i);
        quicksort(arr_copy, 0, n - 1, i);
        printArray(arr_copy, n);
    }

    return 0;
}
