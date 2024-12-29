#include <stdio.h>

int countNice(int arr[], int n, int k) {
    int count = 0;

    // Using nested loops to consider all subarrays
    for (int i = 0; i < n; i++) {
        int oddCount = 0;
        for (int j = i; j < n; j++) {
            if (arr[j] % 2 != 0) {
                oddCount++;
            }
            if (oddCount == k) {
                count++;
            }
        }
    }

    return count;
}

int main() {
    int arr[] = {1, 1, 2, 1, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 3;

    printf("%d\n", countNice(arr, n, k));
    return 0;
}
