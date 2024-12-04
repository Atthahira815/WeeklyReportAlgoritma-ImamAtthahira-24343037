#include <stdio.h>
#include <string.h>

char correct_username[] = "Kasih paham";
char correct_password[] = "Okee Bang";

char user[20];
char password[15];

int main()
{
    while (1)
    {
        printf("Masukkan username anda: ");
        scanf(" %[^\n]", user);

        printf("Masukkan password anda: ");
        scanf(" %[^\n]", password);

        if (strcmp(correct_username, user) == 0 && strcmp(correct_password, password) == 0)
        {
            printf("Anda Berhasil Login!\n");
            break;
        }
        else
        {
            printf("Username atau password anda salah, coba lagi!\n"); 
        }
    }
}
