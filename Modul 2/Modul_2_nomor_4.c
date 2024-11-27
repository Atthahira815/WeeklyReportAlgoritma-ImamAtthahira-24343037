#include <stdio.h>

int main() 
{ 
   float a, b, c;
    
   printf("Penghitung Luas Persegi Panjang \n");
   
   printf("Masukkan Panjang: ");
   scanf("%f", &a);
   
   printf("Masukkan Lebar: ");
   scanf("%f", &b);
   
   c = a * b;
   
   printf("Luas Persegi Panjang:%.2f\n", c);
   
   return 0;
}