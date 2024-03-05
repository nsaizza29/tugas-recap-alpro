#include <stdio.h>

float phi = 3.141592653589793238462643383279502884197;

int main(){
    printf("%f\n", phi); 
    printf("%.1f\n", phi); // untuk menampilkan 1 angka dibelakang koma
    printf("%.2f\n", phi); // untuk menampilkan 2 angka dibelakang koma
    printf("%.3f\n", phi); // untuk menampilkan 3 angka dibelakang koma
    printf("%.4f\n", phi); // untuk menampilkan 4 angka dibelakang koma
    printf("%.5f", phi); // untuk menampilkan 5 angka dibelakang koma
    return 0;
}