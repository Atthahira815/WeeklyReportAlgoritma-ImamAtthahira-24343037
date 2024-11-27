#include <stdio.h>

int main() 
{
    float total_pembelian, diskon = 0, total_akhir;
    float cashback = 0;

    printf("Masukkan total pembelian: Rp. ");
    scanf("%f", &total_pembelian);

    if (total_pembelian > 125000) {
        diskon = 0.25 * total_pembelian;
        cashback = 5000;
    } else if (total_pembelian > 75000) {
        diskon = 0.15 * total_pembelian;
    } else {
        diskon = 0.05 * total_pembelian;
    }

    total_akhir = total_pembelian - diskon + cashback;

    printf("\nDiskon yang diberikan: Rp. %.2f", diskon);
    printf("\nCashback yang diberikan: Rp. %.2f", cashback);
    printf("\nTotal yang harus dibayar: Rp. %.2f\n", total_akhir);

    return 0;
}