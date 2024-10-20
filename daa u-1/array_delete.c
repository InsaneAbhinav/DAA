#include <stdio.h>

void insertElement(int arr[], int *n, int element, int pos) {
    for (int i = *n; i > pos; i--) 
        arr[i] = arr[i - 1];
    arr[pos] = element;
    (*n)++;
}

void deleteElement(int arr[], int *n, int pos) {
    for (int i = pos; i < *n - 1; i++) 
        arr[i] = arr[i + 1];
    (*n)--;
}

int main() {
    int a1[100] = {1, 2, 3, 4, 5}, n = 5;

    insertElement(a1, &n, 10, 2);
    printf("After insertion: ");
    for (int i = 0; i < n; i++) printf("%d ", a1[i]);
    printf("\n");

    deleteElement(a1, &n, 3);
    printf("After deletion: ");
    for (int i = 0; i < n; i++) printf("%d ", a1[i]);
    printf("\n");

    return 0;
}
