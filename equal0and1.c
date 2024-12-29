#include <stdio.h>
#include <stdlib.h>

int largestSubarrayEqual0sAnd1s(int arr[], int size) {
    int prefixSum = 0;
    int maxLength = 0;
    int hashMap[2 * size];
    for (int i = 0; i < 2 * size; i++) {
        hashMap[i] = -1;
    }
    hashMap[size] = -1;

    for (int i = 0; i < size; i++) {
        if (arr[i] == 0) {
            prefixSum -= 1;
        } else {
            prefixSum += 1;
        }
        
        if (prefixSum == 0) {
            maxLength = i + 1;
        }

        if (hashMap[prefixSum + size] != -1) {
            maxLength = (i - hashMap[prefixSum + size] > maxLength) ? i - hashMap[prefixSum + size] : maxLength;
        } else {
            hashMap[prefixSum + size] = i;
        }
    }

    return maxLength;
}

int main() {
    int array[] = {0, 1, 0, 1, 1, 1, 0, 0, 1};
    int size = sizeof(array) / sizeof(array[0]);

    printf("%d\n", largestSubarrayEqual0sAnd1s(array, size));
    return 0;
}
