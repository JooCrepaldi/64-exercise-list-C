#include <stdio.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "");

    int op;
    char res;
    float temp, peso, alt;

    do
    {
        printf("1 ? Conversão de Graus Celsius em Graus Fahrenheit\n");
        printf("2 ? Conversão de Graus Fahrenheit em Graus Celsius\n");
        printf("3 ? Peso ideal do homem\n");
        printf("4 ? Peso ideal da mulher\n");

        printf("escolha uma opção:");
        scanf("%d", &op);

        while (getchar() != '\n')
            ;

        switch (op)
        {
        case 1:
            printf("insira um temperatura em graus Celsius:");
            scanf("%f", &temp);
            printf("a temperatura em Fahrenheit é: %.1f\n", ((temp * 1.8) + 32));
            break;

        case 2:
            printf("insira um temperatura em graus Fahrenheit:");
            scanf("%f", &temp);

            if (alt > 0)
            {
                printf("O peso ideal para o homem é: %.2f\n", peso / (alt * alt));
            }
            else
            {
                printf("Altura inválida.\n");
            }

            if (alt < 18.5 || alt > 24, 9)
            {
                printf("Fora do peso idea\n");
            }
            else
            {
                printf("Dentro do peso idea\n");
            }

            break;

        case 3:
            printf("insira o peso:");
            scanf("%f", &peso);

            printf("insira a altura:");
            scanf("%f", &alt);

            if (alt > 0)
            {
                printf("O peso ideal para o homem é: %.2f\n", peso / (alt * alt));
            }
            else
            {
                printf("Altura inválida.\n");
            }

            if (alt < 18.5 || alt > 24, 9)
            {
                printf("Fora do peso idea\n");
            }
            else
            {
                printf("Dentro do peso idea\n");
            }

            break;

        case 4:
            printf("insira o peso:");
            scanf("%f", &peso);

            printf("insira a altura:");
            scanf("%f", &alt);

            printf("o peso ideal para a mulher é: %.f\n", peso / (alt * alt));
            break;

        default:
            printf("Opção inválida.\n");
            break;
        }

        printf("deseja sair do programa (S/N)?");
        scanf(" %c", &res);

    } while (res != 'N' && res == 'n');

    return 0;
}