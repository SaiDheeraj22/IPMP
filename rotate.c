#include <stdio.h>

void rotate(int mat[][100], int r, int c) {
    int rotated[100][100];

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            rotated[j][r - 1 - i] = mat[i][j];
        }
    }

    for (int i = 0; i < c; i++) {
        for (int j = 0; j < r; j++) {
            printf("%d ", rotated[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int mat[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };
    int rows = 3;
    int cols = 4;

    rotate(mat, rows, cols);

    return 0;
}
