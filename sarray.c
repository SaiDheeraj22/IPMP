#include <stdio.h>

void subarrayWithSum(int arr[], int n, int target) {
    for (int i = 0; i < n; i++) {
        int currSum = 0;
        for (int j = i; j < n; j++) {
            currSum += arr[j];
            if (currSum == target) {
                printf("Subarray  %d to %d\n", i, j);
                return;
            }
        }
    }
    printf("No subarray \n");
}

int main() {
    int arr[] = {1, 2, 3, 7, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 12;

    subarrayWithSum(arr, n, target);

    return 0;
}
