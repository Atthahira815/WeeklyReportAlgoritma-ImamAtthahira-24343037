//Buatlah program untuk menjawab pertanyaan berikut
#include <stdio.h>

int main() {
    // Bagian A
    int LesleyA  = 57082;
    int LaylaA   = LesleyA;
    int BalmondA = LaylaA + 1;

    printf("Kasus A \n");
    printf("Nilai Lesley     : %d\n", LesleyA);
    printf("a) Nilai Layla   : %d\n", LaylaA); 
    printf("b) Nilai Balmond : %d\n", BalmondA);

    // Bagian B
    int *LaylaB = &LesleyA; 
    int BalmondB = *LaylaB + 1; 

    printf("\nKasus B\n");
    printf("Nilai Lesley     : %d\n", LesleyA);
    printf("a) Nilai Layla   : %d\n", LaylaB);
    printf("b) Nilai Balmond : %d\n", BalmondB); 

    return 0;
}