#include <stdio.h>

int main() {
    int array[] = {2, 4, 6, 8, 10, 12};
    int size = sizeof(array) / sizeof(array[0]);
    int targetSum = 16;

    printf("Pasangan angka dengan jumlah %d: ", targetSum);
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if (array[i] + array[j] == targetSum) {
                printf("(%d, %d) ", array[i], array[j]);
            }
        }
    }
    printf("\n");

    return 0;
}