#include <stdio.h>

void modifyMatrix(int mat[][100], int m, int n) {
    int row[m], col[n];

    for (int i = 0; i < m; i++) row[i] = 0;
    for (int j = 0; j < n; j++) col[j] = 0;

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (mat[i][j] == 1) {
                row[i] = 1;
                col[j] = 1;
            }
        }
    }

    for (int i = 0; i < m; i++) {
        if (row[i] == 1) {
            for (int j = 0; j < n; j++) {
                mat[i][j] = 1;
            }
        }
    }

    for (int j = 0; j < n; j++) {
        if (col[j] == 1) {
            for (int i = 0; i < m; i++) {
                mat[i][j] = 1;
            }
        }
    }
}

void printMatrix(int mat[][100], int m, int n) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int mat[4][4] = {
        {0, 1, 0, 0},
        {0, 0, 1, 0},
        {1, 0, 0, 0},
        {0, 0, 0, 1}
    };
    int m = 4;
    int n = 4;

    printMatrix(mat, m, n);
    modifyMatrix(mat, m, n);
    printMatrix(mat, m, n);

    return 0;
}
