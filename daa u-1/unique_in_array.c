#include <stdio.h>

void printDistinctElements(int arr[], int n) {
    int isDistinct;
    for (int i = 0; i < n; i++) {
        isDistinct = 1;
        for (int j = 0; j < i; j++) {
            if (arr[i] == arr[j]) {
                isDistinct = 0;
                break;
            }
        }
        if (isDistinct) 
            printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {12, 10, 9, 45, 2, 10, 10, 45};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Distinct elements: ");
    printDistinctElements(arr, n);

    return 0;
}
