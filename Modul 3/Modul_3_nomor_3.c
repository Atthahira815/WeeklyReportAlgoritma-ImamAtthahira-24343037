#include<stdio.h>

int main()
{
    float d, v, l, π, r;
    
    
    printf("Masukkan Diameter Bola Basket: ");
    scanf("%f", &d);
    
    r = d / 2;
    π = 3.14;
    v = (4 / 3) * π * r * r * r;
    l = 4 * π * r * r;
    
    printf("Volume Bola Basket = %.2f\n", v);
    printf("Luas Bola Basket   = %.2f\n", l);
    
    return 0;
}