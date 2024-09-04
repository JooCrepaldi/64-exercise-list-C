#include <locale.h>
int main()
{
    setlocale(LC_ALL, "");

    int c, n;
    char r;

    do
    {
        printf("insira o seu código:\n");
        scanf("%d", &c);

        printf("insira suas horas trabalhadas do mês:\n");
        scanf("%d", &n);

        if (n <= 50)
        {
            printf("%d - TOTAL DO SALáRIO: %d\n", c, (n * 10));

            printf("deseja mesmo sair do programa? (S/N)");
            scanf("%c", &r);
        }
        else
        {
            printf("%d - TOTAL DO SALáRIO: %d\n", c, (50 * 10));
            printf("%d - TOTAL DO SALáRIO EXCEDENTE: %d\n", c, ((n - 50) * 20));

            printf("deseja mesmo sair do programa? (S/N)");
            scanf("%c", &r);
        }

    } while (r != 'S' && r != 's');

    printf("Encerrando o programa...\n");   

    return 0;
}