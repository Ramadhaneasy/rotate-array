#include <stdio.h>

void printDuplicate(int arr[], int size) {
    printf("Array yang duplikat: ");
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] == arr[j]) {
                printf("%d ", arr[i]);
                break;  // Cetak nilai duplikat sekali saja
            }
        }
    }
    printf("\n");
}

int main() {
    int array[] = {20, 20, 20, 3, 6, 7, 8, 10, 3, 5, 5};
    int size = sizeof(array) / sizeof(array[0]);

    printDuplicate(array, size);

    return 0;
}