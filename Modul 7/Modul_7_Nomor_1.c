#include <stdio.h>

void main() {
    int nilai_mahasiswa[20] = {75, 45, 20, 67, 70, 75, 85, 80, 90, 95, 67, 67, 55, 35, 40, 60, 55, 75, 85, 90};

    int length = sizeof(nilai_mahasiswa) / sizeof(*nilai_mahasiswa);
    int sum = 0;

    printf("Seluruh nilai mahasiswa yaitu 75, 45, 20, 67, 70, 75, 85, 80, 90, 95, 67, 67, 55, 35, 40, 60, 55, 75, 85, 90\n");

    for(int i = 0; i < length; i++){
        sum += nilai_mahasiswa[i];
    }

    float rata_rata = (float)sum / (float) length;

    printf("Rata-rata nilai mahasiswa: %.2f\n", rata_rata);
}