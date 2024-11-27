#include <stdio.h>
#include <math.h>

double luasPermukaanBola(double jariJari) {
    return 4 * M_PI * pow(jariJari, 2);
}

double luasPermukaanKubus(double sisi) {
    return 6 * pow(sisi, 2);
}

double luasPermukaanBalok(double panjang, double lebar, double tinggi) {
    return 2 * ((panjang * lebar) + (panjang * tinggi) + (lebar * tinggi));
}

double luasPermukaanTabung(double jariJari, double tinggi) {
    return (2 * M_PI * jariJari * (jariJari + tinggi));
}

int main() {
    int pilihan;
    double jariJari, sisi, panjang, lebar, tinggi;

    printf("Pilih bangun ruang untuk menghitung luas permukaan:\n");
    printf("1. Bola\n");
    printf("2. Kubus\n");
    printf("3. Balok\n");
    printf("4. Tabung\n");
    printf("Masukkan pilihan Anda: ");
    scanf("%d", &pilihan);

    switch(pilihan) {
        case 1:
            printf("Masukkan jari-jari bola: ");
            scanf("%lf", &jariJari);
            printf("Luas permukaan bola: %.2lf\n", luasPermukaanBola(jariJari));
            break;
        case 2:
            printf("Masukkan panjang sisi kubus: ");
            scanf("%lf", &sisi);
            printf("Luas permukaan kubus: %.2lf\n", luasPermukaanKubus(sisi));
            break;
        case 3:
            printf("Masukkan panjang balok: ");
            scanf("%lf", &panjang);
            printf("Masukkan lebar balok: ");
            scanf("%lf", &lebar);
            printf("Masukkan tinggi balok: ");
            scanf("%lf", &tinggi);
            printf("Luas permukaan balok: %.2lf\n", luasPermukaanBalok(panjang, lebar, tinggi));
            break;
        case 4:
            printf("Masukkan jari-jari alas tabung: ");
            scanf("%lf", &jariJari);
            printf("Masukkan tinggi tabung: ");
            scanf("%lf", &tinggi);
            printf("Luas permukaan tabung: %.2lf\n", luasPermukaanTabung(jariJari, tinggi));
            break;
        default:
            printf("Pilihan tidak valid!\n");
            break;
    }

    return 0;
}