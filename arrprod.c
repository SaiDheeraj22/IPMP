#include <stdio.h>

int maxProduct(int arr[], int n) {
    int result = arr[0];
    for (int i = 0; i < n; i++) {
        int mul = 1;
        for (int j = i; j < n; j++) {
            mul *= arr[j];
            result = (result > mul) ? result : mul;
        }
    }
    return result;
}

int main() {
    int arr[] = { -2, 6, -3, -10, 0, 2 };
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("%lld\n", maxProduct(arr, n));
    return 0;
}
