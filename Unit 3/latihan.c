#include <stdio.h>

int main() {
    int array ;

    printf("Masukkan jumlah elemen: ");
    scanf("%d", &array);

    int nilai_elemen[array];

    for (int i = 0; i < array; i++) {
        printf("Masukkan nilai setiap elemen: ");
        scanf("%d", &nilai_elemen[i]);
    }

    int total = 0;
    for (int i = 0; i < array; i++) {
        total += nilai_elemen[i];
    }

    printf("Total prnjumlahan array: %d\n", total);

    return 0;
}