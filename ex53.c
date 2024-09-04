#include <stdio.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "");

    int v;
    int i=0;
    int numv=0;

    printf("insira a quantidade de voltas da corrida: ");
    scanf("%d", &v);

    double tv[v];

    for ( i = 0; i < v; i++)
    {
        printf("insira o tempo da volta %d:", i);
        scanf("%lf", &tv[i]);
        numv += tv[i];
    }

    int mtempo = tv[0];
    int mvolta = 0;
    int mvolta2 = 0;

    for ( i = 0; i < v; i++)
    {
        if (tv[i]<mtempo)
        {
            mtempo=tv[i];
            mvolta2=mvolta;
        }
        mvolta++;    
    }

    printf("melhor tempo: %d\n", mtempo);

    printf("volta do melhor tempo: %d\n", mvolta2);

    printf("média das voltas: %d\n", numv/v );

    return 0;
}