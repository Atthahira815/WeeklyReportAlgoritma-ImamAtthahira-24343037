// Buatlah program untuk menghitung besarnya diskon yang diberikan atas besarnya jumlah pembelian

#include <stdio.h>

float potong(float total) {
    if (total >= 3000000) {
        return total * 0.35;
    } else if (total >= 1000000) {
        return total * 0.20;
    }
    return 0;
}

int main() {
    float totalPembelian, diskon, totalBayar;

    printf("Mesin Penghitung Diskon\n");
    printf("Total harga belanjaan anda                 : Rp.");
    scanf("%f", &totalPembelian);

    diskon = potong(totalPembelian);
    totalBayar = totalPembelian - diskon;

    printf("Total diskon yang anda dapatkan            : Rp.%.2f\n", diskon);
    printf("Total harga belanjaan yang harus di bayar  : Rp.%.2f\n", totalBayar);

    return 0;
}