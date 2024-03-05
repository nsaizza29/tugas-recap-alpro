#include <stdio.h>

int jumlah = 5;
int array[] = {9, 9, 28, 10, 5};

int main() {
   
    for (int i = 0; i < 4; i++) {
        jumlah += array[i];
    }

    printf("Hasil penjumlahan: %d\n", jumlah);

    return 0;
}

