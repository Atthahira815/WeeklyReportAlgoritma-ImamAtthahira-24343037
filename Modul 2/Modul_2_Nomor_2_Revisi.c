#include <stdio.h>

int main() 
{ 
   char nama[35];
   int nim;
   char prodi[40];
   char fakultas[40];
   float nilaipraktikum;
   float nilaiUTS;
   float nilaiUAS;
   float nilaiakhir;
   
   printf("Nama: ");
   scanf("%[^\n]s", nama);
   
   printf("NIM: ");
   scanf("%d", &nim);
   
   printf("Prodi: ");
   scanf("%s", prodi);
   
   printf("Fakultas: ");
   scanf("%s", fakultas);
   
   printf("Nilai Praktikum: ");
   scanf("%f", &nilaipraktikum);
   
   printf("Nilai UTS: ");
   scanf("%f", &nilaiUTS);
   
   printf("Nilai UAS: ");
   scanf("%f", &nilaiUAS);
   
   printf("\nNama            = %s\n", nama);
   printf("NIM             = %d\n", nim);
   printf("Prodi           = %s\n", prodi);
   printf("Fakultas        = %s\n", fakultas);
   printf("Nilai Praktikum = %.2f\n", nilaipraktikum);
   printf("Nilai UTS       = %.2f\n", nilaiUTS);
   printf("Nilai UAS       = %.2f\n", nilaiUAS);
   printf("Nilai Akhir     = %.2f\n", nilaiakhir = (0.3 * nilaipraktikum) + (0.3 * nilaiUTS) + (0.4 * nilaiUAS));
   
   return 0;
}