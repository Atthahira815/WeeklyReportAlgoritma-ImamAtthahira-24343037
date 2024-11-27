#include<stdio.h>

int main()
{
    float rupiah, kurs = 14250, dollar;
    
    printf("~~~Konversi Rupiah ke Dollar~~~\n");
    printf("Masukkan Nilai Rupiah: ");
    scanf("%f", &rupiah);
    
    dollar = rupiah / kurs;
    
    printf("\nJumlah dollar yang diterima adalah %.2f USD", dollar);
    
    return 0;
}