#include <stdio.h>

int main()
{
    int jumlah_mahasiswa;

    printf("Masukkan banyak mahasiswa: ");
    scanf("%d", &jumlah_mahasiswa);

    char nama_mahasiswa[jumlah_mahasiswa][100];

    for (int i = 0; i < jumlah_mahasiswa; i++)
    {
        printf("masukkan nama mahasiswa %d: ", i + 1);
        scanf(" %[^\n]", nama_mahasiswa[i]);
    }

    printf("\nNama Mahasiswa yang dimasukkan:\n");
    for (int i = 0; i < jumlah_mahasiswa; i++)
        
    {
        printf("Nama mahasiswa ke-%d: %s\n", i + 1, nama_mahasiswa[i]);
    }

    return 0;
}
