#include <stdio.h>

int countNonZeroElements(int mat[3][3], int r, int c) {
    int count = 0;
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            if (mat[i][j] != 0) 
                count++;
        }
    }
    return count;
}

int main() {
    int mat[3][3] = {
        {1, 0, 3},
        {0, 0, 6},
        {7, 8, 0}
    };
    int r = 3, c = 3;

    printf("Total nonzero elements: %d\n", countNonZeroElements(mat, r, c));
    return 0;
}
