#include <stdio.h>

int sisi;

int HitungKeliling(){
  return 4 * sisi;
}

int HitungLuas(){
  return sisi * sisi;
}

int HitungVolume(){
  return sisi * sisi * sisi;
}

int main() {
 
printf("Masukan sisi: ");
scanf("%d", &sisi);

int Keliling = HitungKeliling(sisi);
int Luas = HitungLuas(sisi);
int Volume = HitungVolume(sisi);

printf("Keliling persegi: %d\n", Keliling);
printf("Luas persegi: %d\n", Luas);
printf("Volume kubus: %d\n", Volume);

  return 0;
}