#include <locale.h>
int main()
{
    setlocale(LC_ALL, "");

    int op, n1, n2;
    char resposta;

    do
    {
        printf("insira um n�mero:");
        scanf("%d", &n1);

        printf("insira outro n�mero:");
        scanf("%d", &n2);

        printf("1 - Adi��o\n");
        printf("2 - Subtra��o\n");
        printf("3 - Multiplica��o\n");
        printf("4 - Divis�o\n");

        printf("escolha uma op��o:");
        scanf("%d", &op);

        switch (op)
        {
        case 1:
            printf("O RESULTADO DA ADI��O: %d\n", (n1 + n2));

            printf("Programa executado. Deseja sair do programa? (S/N): ");
            scanf(" %c", &resposta);
            break;

        case 2:
            printf("O RESULTADO DA SUBTRA��O: %d\n", (n1 - n2));

            printf("Programa executado. Deseja sair do programa? (S/N): ");
            scanf(" %c", &resposta);
            break;

        case 3:
            printf("O RESULTADO DA MULTIPLICA��O: %d\n", (n1 * n2));

            printf("Programa executado. Deseja sair do programa? (S/N): ");
            scanf(" %c", &resposta);
            break;

        case 4:
            if (n2 > 0)
            {
                printf("O RESULTADO DA DIVIS�O: %d\n", (n1 / n2));
                
                printf("Programa executado. Deseja sair do programa? (S/N): ");
                scanf(" %c", &resposta);
            }

            else
            {
                printf("n�mero inv�lido/n");

                printf("Programa executado. Deseja sair do programa? (S/N): ");
                scanf(" %c", &resposta);
            }
            break;

            default:
                printf("op��o inv�lida!");

                printf("Programa executado. Deseja sair do programa? (S/N): ");
                scanf(" %c", &resposta);
                break;
        }
    } while (resposta != 'S' && resposta != 's');

    printf("Encerrando o programa...\n");

    return 0;
}