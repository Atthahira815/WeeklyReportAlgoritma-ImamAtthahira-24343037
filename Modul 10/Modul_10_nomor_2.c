// Buat program untuk menentukan zodiak kelahiran dengan menggunakan Array dengan Struktur
#include <stdio.h>
#include <string.h>

typedef struct
{
    char nama[20];
    int mulaiHari;
    int mulaiBulan;
    int akhirHari;
    int AkhirBulan;

} zodiak;

void cariZodiak(int hari, int bulan)
{
    zodiak zodiacs[] = {
        {"Capricorn", 22, 12, 19, 1},
        {"Aquarius", 20, 1, 18, 2},
        {"Pisces", 19, 2, 20, 3},
        {"Aries", 21, 3, 19, 4},
        {"Taurus", 20, 4, 20, 5},
        {"Gemini", 21, 5, 20, 6},
        {"Cancer", 21, 6, 22, 7},
        {"Leo", 23, 7, 22, 8},
        {"Virgo", 23, 8, 22, 9},
        {"Libra", 23, 9, 22, 10},
        {"Scorpio", 23, 10, 21, 11},
        {"Sagitarius", 22, 11, 21, 12}};

    int totalZodiacs = sizeof(zodiacs) / sizeof(zodiak);
    for (int i = 0; i < totalZodiacs; i++)
    {
        if ((bulan == zodiacs[i].mulaiBulan && hari >= zodiacs[i].mulaiHari) ||
            (bulan == zodiacs[i].AkhirBulan && hari <= zodiacs[i].akhirHari))
        {
            printf("Zodiak anda adalah : %s\n", zodiacs[i].nama);
            return;
        }
    }
    printf("Tanggal yang anda inputkan tidak valid untuk mendapatkan zodiak!\n");
}

int main()
{
    int hari, bulan, tahun; 

    printf("Masukkan tanggal lahir kamu dalam format [Tanggal-Bulan-Tahun]: ");
    scanf("%d-%d-%d", &hari, &bulan, &tahun);

    if (bulan < 1 || bulan > 12 || hari < 1 || hari > 31)
    {
        printf("Maaf, tanggal lahir yang anda masukkan tidak valid, silahkan coba lagi.\n");
        return 1;
    }
    printf("Tanggal Lahir Anda [Tanggal- Bulan-Tahun] : %02d-%02d-%02d\n", hari, bulan, tahun);
    cariZodiak(hari, bulan);

    return 0;
}