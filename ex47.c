#include <stdio.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "");

    int x;
    int v[10];
    int i;
    int maiores = 0, menores = 0, iguais = 0;

// salvando x
    printf("digite um n�mero para X:");
    scanf("%d", &x);

// cadastrando vetor
    for (i = 0; i < 10; i++)
    {
        printf("digite 10 n�meros para o vetor:\n");
        scanf("%d", &v[i]);
    }

// Compara��o com x
    for (i = 0; i < 10; i++)
    {
        if (v[i] > x)
        {
            maiores++;
        }

        else if (v[i] < x)
        {
            menores++;
        }

        else
        {
            iguais++;
        }
    }

// Exibindo resultados
    printf("A quantidade de n�meros maiores que %d � %d\n", x, maiores);
    printf("A quantidade de n�meros menores que %d � %d\n", x, menores);
    printf("A quantidade de n�meros iguais a %d � %d\n", x, iguais);

    return 0;
}
