#include <stdio.h>

int maxAscendingSubarraySum(int arr[], int n) {
    int maxSum = arr[0];
    
    for (int i = 0; i < n; i++) {
        int currentSum = arr[i];
        for (int j = i + 1; j < n; j++) {
            if (arr[j] > arr[j - 1]) {
                currentSum += arr[j];
            } else {
                break;
            }
        }
        if (currentSum > maxSum) {
            maxSum = currentSum;
        }
    }
    return maxSum;
}

int main() {
    int arr[] = {10, 20, 30, 5, 10, 50, 60, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("%d\n", maxAscendingSubarraySum(arr, n));
    return 0;
}
