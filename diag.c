#include <stdio.h>
void diagonalPrint(int mat[][100], int m, int n) {
    for (int d = 0; d < m + n - 1; d++) {
        int row = (d < m) ? d : m - 1;
        int col = d - row;
        
        while (row >= 0 && col < n) {
            printf("%d ", mat[row][col]);
            row--;
            col++;
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
    diagonalPrint(mat, m, n);
    return 0;
}
