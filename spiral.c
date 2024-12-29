#include <stdio.h>

void spiralPrint(int mat[][100], int m, int n) {
    int top = 0, bottom = m - 1, left = 0, right = n - 1;

    while (top <= bottom && left <= right) {
        for (int i = left; i <= right; i++) {
            printf("%d ", mat[top][i]);
        }
        top++;

        for (int i = top; i <= bottom; i++) {
            printf("%d ", mat[i][right]);
        }
        right--;

        if (top <= bottom) {
            for (int i = right; i >= left; i--) {
                printf("%d ", mat[bottom][i]);
            }
            bottom--;
        }

        if (left <= right) {
            for (int i = bottom; i >= top; i--) {
                printf("%d ", mat[i][left]);
            }
            left++;
        }
    }
}

int main() {
    int mat[4][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };
    int m = 4;  
    int n = 4;  

    printf("Spiral order: ");
    spiralPrint(mat, m, n);

    return 0;
}
