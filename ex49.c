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
      printf("digite um n�mero para v1:\n");
      scanf("%lf", &v1[i]);
    }

//cadastrando o vetor v1

    for ( i = 0; i < 10; i++)
    {
      printf("digite um n�mero para v2:\n");
      scanf("%lf", &v2[i]);
    }

//compara��o de mesmo valor

    for ( i = 0; i < 10; i++)
    {
        if (v2[i]==v1[i])
        {
            mesmovalor++;
        }
        
        else{
        }
    }

//exibi��o dos valores

    printf("a quantidade de n�meros iguais nos vetores v1 e v2 �: %d", mesmovalor);


    return 0;
}