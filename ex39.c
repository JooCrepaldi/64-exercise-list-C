#include <locale.h>
int main()
{
    setlocale(LC_ALL, "");

    int n;
    char r;

    do
    {
        printf("insira um número:");
        scanf("%d", &n);

        if (n % 2 == 0)
        {
            printf("O número %d é par.\n", n);
        }
        else
        {
            printf("O número %d é ímpar.\n", n);
        }

        if (n > 0)
        {
            printf("O número %d é positivo.\n", n);
        }
        else if (n < 0)
        {
            printf("O número %d é negativo.\n", n);
        }
        else
        {
            printf("O número %d é zero.\n", n);
        }

        printf("Deseja encerrar o programa? (S/N): ");
        scanf(" %c", &r);

    } while (r == 'N' || r == 'n');

    printf("Encerrando o programa...\n");

    return 0;
}