#include <stdio.h>
#include <locale.h>
#include <limits.h>
int main()
{
    setlocale(LC_ALL, "");

    int i, num;
    float soma;
    float maiorval = INT_MIN;

    printf("escreva a quantidade de n�meros que deseja digitar:\n");
    scanf("%d", &num);
    // verifica��o
    if (num <= 0)
    {
        printf("A quantidade de n�meros deve ser um n�mero inteiro positivo.\n");
    }
    // vetor
    float v[num];
    // cadastrando os numeros no vetor
    for (i = 0; i < num; i++)
    {
        printf("insira os %d n�meros:\n",num);
        scanf("%f", &v[i]);

        soma += v[i];
    }
    // maior valor
    maiorval = v[0];

    for (i = 1; i < num; i++)
    {
        if (v[i] > maiorval)//o n�mero que est� na posi��o 0
        {   
            maiorval = v[i];
        }
    }

    printf("a m�dia �:%.2f\n", (soma / num));
    printf("o maior valor �: %.2f\n", maiorval);

    return 0;
}