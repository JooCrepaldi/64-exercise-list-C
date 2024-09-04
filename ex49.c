#include <stdio.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "");

    float v1[10];
    float v2[10];
    int mesmovalor = 0;
    int i;

//cadastrando o vetor v1

    for ( i = 0; i < 10; i++)
    {
      printf("digite um número para v1:\n");
      scanf("%lf", &v1[i]);
    }

//cadastrando o vetor v1

    for ( i = 0; i < 10; i++)
    {
      printf("digite um número para v2:\n");
      scanf("%lf", &v2[i]);
    }

//comparação de mesmo valor

    for ( i = 0; i < 10; i++)
    {
        if (v2[i]==v1[i])
        {
            mesmovalor++;
        }
        
        else{
        }
    }

//exibição dos valores

    printf("a quantidade de números iguais nos vetores v1 e v2 é: %d", mesmovalor);


    return 0;
}