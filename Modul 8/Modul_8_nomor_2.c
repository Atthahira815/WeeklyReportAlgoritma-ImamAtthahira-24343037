// Buatlah program yang menggunakan fungsi untuk perhitungan aritmetik yaitu penjumlahan, pengurangan, perkalian dan pembagian
#include <stdio.h>

float hitung(float a, float b, char operasi) {
    if (operasi == '+') return a + b;
    if (operasi == '-') return a - b;
    if (operasi == '*') return a * b;
    if (operasi == '/') {
        if (b == 0) {
            printf("Terjadi kesalahan.\nPembagian dengan angka nol tidak terdefinisi!!\n");
            return 0;
        }
        return a / b;
    }
    return 0;
}

int main() {
    float x, y, hasil;
    char operasi;

    printf("Pilihan Operasi Aritmatika yang anda inginkan (+, -, *, /): ");
    scanf(" %c", &operasi);
    printf("Masukkan bilangan pertama: ");
    scanf("%f", &x);
    printf("Masukkan bilangan kedua: ");
    scanf("%f", &y);

    hasil = hitung(x, y, operasi);
    printf("Hasilnya: %2.f\n", hasil);

    return 0;
}