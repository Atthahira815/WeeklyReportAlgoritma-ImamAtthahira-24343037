#include <stdio.h>

int main() {
    int choice;
    float num1, num2, result;

    printf("Kalkulator Sederhana\n");
    printf("Pilih operasi yang diinginkan:\n");
    printf("a) Penjumlahan (1)\n");
    printf("b) Pengurangan (2)\n");
    printf("c) Perkalian (3)\n");
    printf("d) Pembagian (4)\n");
    printf("e) Hasil Bagi (Modulus) (5)\n");
    printf("Masukkan pilihan (1-5): ");
    scanf("%d", &choice);

    printf("Masukkan dua bilangan: ");
    scanf("%f %f", &num1, &num2);

    switch (choice) {
        case 1:
            result = num1 + num2;
            printf("Hasil Penjumlahan: %.2f\n", result);
            break;
        case 2:
            result = num1 - num2;
            printf("Hasil Pengurangan: %.2f\n", result);
            break;
        case 3:
            result = num1 * num2;
            printf("Hasil Perkalian: %.2f\n", result);
            break;
        case 4:
            if (num2 != 0) {
                result = num1 / num2;
                printf("Hasil Pembagian: %.2f\n", result);
            } else {
                printf("Error: Pembagian dengan nol tidak valid.\n");
            }
            break;
        case 5:
            if ((int)num2 != 0) {
                result = (int)num1 % (int)num2;
                printf("Hasil Bagi (Modulus): %.0f\n", result);
            } else {
                printf("Error: Modulus dengan nol tidak valid.\n");
            }
            break;
        default:
            printf("Pilihan tidak valid.\n");
            break;
    }

    return 0;
}