// Program untuk menhitung luas dan keliling lingkaran dengan fungsi
// Fungsi luas () untuk luas dan fungsi keliling () untuk keliling lingkaran
#include <stdio.h>
#define PI 3.14

float keliling (float r) {
   return 2 * PI * r;
}

float luas (float r) {
   return PI * r * r;
}

int main() {
    float jarijari;
    printf("Masukkan jari-jari lingkaran: ");
    scanf("%f", &jarijari);

    if (jarijari <= 0) {
        printf("Terjadi Kesalahan.\nHanya bisa memasukkan Jari-jari dengan bilangan positif!!\n");
        return 1;
    }

    printf("Keliling lingkaran: %.2f\n", keliling(jarijari));
    printf("Luas lingkaran: %2.f\n", luas(jarijari));

    return 0;
}