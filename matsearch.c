#include <stdio.h>
#include <stdbool.h>
bool binarySearch(int row[], int n, int x) {
    int left = 0, right = n - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (row[mid] == x) {
            return true;
        } else if (row[mid] < x) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    return false;
}
bool isPresent(int mat[][5], int m, int n, int x) {
    for (int i = 0; i < m; i++) {
        if (binarySearch(mat[i], n, x)) {
            return true;
        }
    }
    return false;
}

int main() {
    int mat[4][5] = {
        {1, 3, 5, 7, 9},
        {2, 4, 6, 8, 10},
        {11, 13, 15, 17, 19},
        {20, 22, 24, 26, 28}
    };
    int m = 4;  
    int n = 5;  
    int x = 15;

    if (isPresent(mat, m, n, x)) {
        printf("%d is present in the matrix.\n", x);
    } else {
        printf("%d is not present in the matrix.\n", x);
    }

    return 0;
}
