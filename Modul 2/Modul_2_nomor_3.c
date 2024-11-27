#include <stdio.h>

int main() 
{ 
   float a, b, c;
    
   printf("Penghitung Luas Segitiga \n");
   
   printf("Masukkan Panjang Alas: ");
   scanf("%f", &a);
   
   printf("Masukkan Tinggi Segitiga: ");
   scanf("%f", &b);
   
   c = a/2 * b;
   
   printf("Luas Segitga:%.2f", c);
   
   return 0;
}