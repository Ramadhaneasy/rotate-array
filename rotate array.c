#include <stdio.h>

int main() {
    // Array awal
    int nums[] = {1, 2, 3, 4, 5, 6, 7};
    
    // Panjang array
    int length = sizeof(nums) / sizeof(nums[0]);
    
    // Langkah rotasi
    int k = 3;
    k = k % length;  // Mengatasi k yang lebih besar dari panjang array

    int tempArray[length];

    // Memindahkan elemen-elemen akhir array sebanyak k langkah ke tempArray
    for (int i = 0; i < k; i++) {
        tempArray[i] = nums[length - k + i];
    }

    // Memindahkan elemen-elemen yang tidak berubah ke tempArray
    for (int i = k; i < length; i++) {
        tempArray[i] = nums[i - k];
    }

    // Menyalin hasil rotasi dari tempArray ke nums
    for (int i = 0; i < length; i++) {
        nums[i] = tempArray[i];
    }

    // Menampilkan array setelah rotasi
    printf("Array setelah rotasi: ");
    for (int i = 0; i < length; i++) {
        printf("%d ", nums[i]);
    }
    printf("\n");

    return  0;
}