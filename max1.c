#include <stdio.h>

#define ROWS 4
#define COLS 5

int maxOnesRow(int mat[ROWS][COLS], int r, int c) {
    int maxRow = -1;
    int maxCount = 0;

    for (int i = 0; i < r; i++) {
        int count = 0;
        for (int j = 0; j < c; j++) {
            if (mat[i][j] == 1) {
                count++;
            }
        }

        if (count > maxCount) {
            maxCount = count;
            maxRow = i;
        }
    }

    return maxRow;
}

int main() {
    int mat[ROWS][COLS] = {
        {0, 0, 1, 1, 1},
        {0, 1, 1, 1, 1},
        {0, 0, 0, 1, 1},
        {1, 1, 1, 1, 1}
    };

    int row = maxOnesRow(mat, ROWS, COLS);
    if (row != -1) {
        printf(" maximum number of 1s is %d\n", row);
    } else {
        printf("No 1s found\n");
    }

    return 0;
}
