// Perkalian dua buah bilangan bulat positif dapat dilakukan dengan metode penjumlahan sebagau berikut: 12x6 = 12+12+12+12+12+12
//Buatlah sebuah program menggunakan fungsi rekrusif untuk menghitung hasil perkalian di atas.

#include <stdio.h>

int perkalian(int a, int b) {
   
    if (b == 0) {
        return 0;
    }
    else if (b == 1) {
        return a;
    }
    else {
        return a + perkalian(a, b - 1);
    }
}

int main() {
    int bilangan1, bilangan2;
    
    printf("Masukkan bilangan bulat positif pertama: ");
    scanf("%d", &bilangan1);
    printf("Masukkan bilangan bulat positif kedua: ");
    scanf("%d", &bilangan2);
    
    if (bilangan1 < 0 || bilangan2 < 0) {
        printf("Terjadi Kesalahan.\nAnda harus memasukkan bilangan bulat positif!!\n");
        return 1; 
    }

    int hasil = perkalian(bilangan1, bilangan2);
    printf("Hasil dari %d x %d adalah %d\n", bilangan1, bilangan2, hasil);
    
    return 0;
}