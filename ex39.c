#include <locale.h>
int main()
{
    setlocale(LC_ALL, "");

    int n;
    char r;

    do
    {
        printf("insira um n�mero:");
        scanf("%d", &n);

        if (n % 2 == 0)
        {
            printf("O n�mero %d � par.\n", n);
        }
        else
        {
            printf("O n�mero %d � �mpar.\n", n);
        }

        if (n > 0)
        {
            printf("O n�mero %d � positivo.\n", n);
        }
        else if (n < 0)
        {
            printf("O n�mero %d � negativo.\n", n);
        }
        else
        {
            printf("O n�mero %d � zero.\n", n);
        }

        printf("Deseja encerrar o programa? (S/N): ");
        scanf(" %c", &r);

    } while (r == 'N' || r == 'n');

    printf("Encerrando o programa...\n");

    return 0;
}