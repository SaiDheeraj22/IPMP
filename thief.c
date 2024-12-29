#include <stdio.h>

int maxLoot(int *arr, int n) {
    if (n <= 0)  return 0;
    if (n == 1)  return arr[0];
    int pick = arr[n - 1] + maxLoot(arr, n - 2);
    int notPick = maxLoot(arr, n - 1);
    return (pick > notPick) ? pick : notPick;
}

int main() {
    int arr[] = {6, 7, 1, 3, 8, 2, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("%d\n", maxLoot(arr, n));
    return 0;
}
