#include <stdio.h>

void main() {
    int arr[] = {2, 7, 11, 15, 4, 5};
    int target = 9;
    int size = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] + arr[j] == target) {
                printf("Indices with sum %d: %d and %d\n", target, i, j);
            }
        }
    }
    printf("No indices found with sum %d.\n", target);
}
