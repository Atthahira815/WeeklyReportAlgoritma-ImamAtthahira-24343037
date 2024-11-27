#include<stdio.h>

int main()
{
    char np[40], nb[30];
    float hb, jb, ht;
    
    printf("~~Detail Pembelian~~\n");
    printf("Masukkan nama Pembeli: ");
    scanf("%[^\n]s", np);
    
    printf("Masukkan nama Barang: ");
    scanf("%s", nb);
    
    printf("Masukkan harga barang satuan: ");
    scanf("%f", &hb);
    
    printf("Jumlah barang yang dibeli: ");
    scanf("%f", &jb);
    
    ht = hb * jb;
    
    printf("\n~~~ Struk Pembelian ~~~\n");
    printf("Nama Pembeli   : %s\n", np);
    printf("Nama Barang    : %s\n", nb);
    printf("Harga Satuan   : %.2f\n", hb);
    printf("Jumlah Barang  : %.1f\n", jb);
    printf("Harga Total    : %.2f\n", ht);
    
    return 0;
}