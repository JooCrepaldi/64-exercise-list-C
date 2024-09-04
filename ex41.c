#include <stdio.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "");

    int id;

    printf("insira a idade do nadador:");
    scanf("%d", &id);

    if (id >= 0)
    {

        if (7 > id && id > 5)
        {
            printf("infantil A");
        }

        if (11 > id && id > 8)
        {
            printf("infantil B");
        }

        if (13 > id && id > 12)
        {
            printf("Juvenil A");
        }

        if (17 > id && id > 14)
        {
            printf("juvenil B");
        }

        if (id > 18)
        {
            printf("Maiores de 18");
        }
    }

    else{
        printf("idade inválida");
    }

    return 0;
}