#include <stdio.h> 

int jarak1, waktu1;
int kecepatan1, waktu2;
int jarak2, kecepatan2;

int main() { 

  scanf("%d", &jarak1);
  scanf("%d", &waktu1); 
  scanf("%d", &kecepatan1);
  scanf("%d", &waktu2);
  scanf("%d", &jarak2);
  scanf("%d", &kecepatan2);

  float kecepatan = (float) jarak1/waktu1;
  printf("%.2f\n", kecepatan);

  float jarak = (float) kecepatan1*waktu2;
  printf("%.2f\n", jarak);

  float waktu = (float) jarak2/kecepatan2;
  printf("%.2f\n", waktu);

  return 0; 
}