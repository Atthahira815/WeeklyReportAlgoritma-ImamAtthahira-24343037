//Buatlah game sederhana,di mana komputer akan memilih nomor secara acak dalam rentang antara 1 san 20.
//Pengguna diminta untuk menebak nomor yang dipilih oleh komputer
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void mulaiPermainan() {
    int randomAngka, tebakan, jawaban = 0;
    char mainLagi;

    srand(time(NULL));
    randomAngka = (rand() % 20) + 1;
    printf("Sistem sudah memilih angka antara 1 dan 20. silahkan anda tebak!\n");

    do {
        printf("Masukkan tebakan anda : ");
        scanf("%d", &tebakan);
        jawaban++;

        if (tebakan < randomAngka) {
            printf("Nomor sistem lebih besar.\n");
        } else if (tebakan > randomAngka) {
            printf("Nomor sistem lebih kecil.\n");
        } else {
            printf("Selamat, Anda berhasil menebak nomor sistem yaitu %d.\n", randomAngka);
            printf("Anda menebak sebanyak %d precobaan untuk menebak jawaban yang berar.\n", jawaban);
            break;
        }
    } while (1);

    printf("Anda mau memainkan game lagi? (y/n): ");
    scanf(" %c", &mainLagi);

    if (mainLagi == 'y' || mainLagi == 'Y') {
        mulaiPermainan();
    } else {
        printf("Terima kasih sudah mau bermain dengan saya!\n");
    }
}

int main() {
    printf("Selamat datang di permainan Tebak angka Sistem!\n");
    mulaiPermainan();
    return 0;
}