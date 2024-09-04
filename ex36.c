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
        printf("insira os números:");
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

    printf("este é o maior número: %.1f\n", maiorval);
    printf("este é o menor número: %.1f\n", menorval);
    printf("esta é a média entre os dez números: %.1f/n", (soma/10));
    
    return 0;
}