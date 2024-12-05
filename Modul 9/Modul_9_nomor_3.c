//Buatlah program untuk menjawab pertanyaan berikut
#include <stdio.h>

int main() {
    // Bagian A
    int Lesley = 57082;
    int Layla, Balmond;

    Layla = Lesley;

    Balmond = Layla + 1;

    printf("Bagian A:\n");
    printf("a) Nilai Layla: %d\n", Layla); 
    printf("b) Nilai Balmond: %d\n", Balmond);

    // Bagian B
    int *LaylaPtr; 
    LaylaPtr = &Lesley; 
    Balmond = *LaylaPtr + 1; 

    printf("\nBagian B:\n");
    printf("a) Nilai Layla: %d\n", *LaylaPtr);
    printf("b) Nilai Balmond: %d\n", Balmond); 

    return 0;
}