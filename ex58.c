#include <stdio.h>
#include <locale.h>
#include <limits.h>
int main()
{
    setlocale(LC_ALL, "");

    int i, num;
    float soma;
    float maiorval = INT_MIN;

    printf("escreva a quantidade de números que deseja digitar:\n");
    scanf("%d", &num);
    // verificação
    if (num <= 0)
    {
        printf("A quantidade de números deve ser um número inteiro positivo.\n");
    }
    // vetor
    float v[num];
    // cadastrando os numeros no vetor
    for (i = 0; i < num; i++)
    {
        printf("insira os %d números:\n",num);
        scanf("%f", &v[i]);

        soma += v[i];
    }
    // maior valor
    maiorval = v[0];

    for (i = 1; i < num; i++)
    {
        if (v[i] > maiorval)//o número que está na posição 0
        {   
            maiorval = v[i];
        }
    }

    printf("a média é:%.2f\n", (soma / num));
    printf("o maior valor é: %.2f\n", maiorval);

    return 0;
}