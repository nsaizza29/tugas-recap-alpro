#include <stdio.h>

int jumlah_transaksi;
int nominal_transaksi; 

int main() {
    int total_pengeluaran=0;

    printf("Jumlah transaksi\n");
    scanf("%d", &jumlah_transaksi);

    if (jumlah_transaksi <= 0) {
        printf("Tidak ada transaksi hari ini\n");
        return 0;
    }

    for (int i = 0; i < jumlah_transaksi; ++i) {
        printf("Nominal transaksi\n");
        scanf("%d", &nominal_transaksi);
        total_pengeluaran += nominal_transaksi;
    }

    printf("Total pengeluaran hari ini %d", total_pengeluaran);
    
    return 0;
}
