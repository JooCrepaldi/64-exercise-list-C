#include <stdio.h>
#include <locale.h>
#include <limits.h>
int main()
{
    setlocale(LC_ALL, "");

    float num, maiorval=INT_MIN, menorval=INT_MAX, soma;
    int i;


    for ( i = 0; i < 10; i++)
    {
        printf("insira os n�meros:");
        scanf("%f", &num);

        if (num>maiorval)
        {
            maiorval=num;
        }

        if (num<menorval)
        {
            menorval=num;
        }

        soma+=num;   
    }

    printf("este � o maior n�mero: %.1f\n", maiorval);
    printf("este � o menor n�mero: %.1f\n", menorval);
    printf("esta � a m�dia entre os dez n�meros: %.1f/n", (soma/10));
    
    return 0;
}