//Buatlah program untuk menampilkan nama terbalik dari sabuah nama yang diinputkan
#include <stdio.h>
#include <string.h>

int main() {
    char kalimat[20];
    int panjang, i;

    printf("Masukkan Nama/Kalimat : ");
    fgets(kalimat, sizeof(kalimat), stdin);
    kalimat[strcspn(kalimat, "\n")] = '\0';

    panjang = strlen(kalimat);

    printf("Kebalikannya: ");
    for (i = panjang - 1; i >= 0; i--) {
        putchar(kalimat[i]);
    }

    printf("\n");
    return 0;
}