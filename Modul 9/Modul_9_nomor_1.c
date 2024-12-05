// Membuat sebuah program menggunakan pointer
#include <stdio.h>
#include <string.h>

int main() {
    char *nama[] = {"D", "N D", "A N D", "L A N D", "R L A N D", "O R L A N D", "B O R L A N D"};

    printf("Output:\n");
    for (int i = 0; i < 7; i++) {
        printf("%s\n", nama[i]);
    }

    return 0;
}