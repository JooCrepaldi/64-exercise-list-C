#include <stdio.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "");

    int i,n;
    int val;
    int maiorval=0,menorval;

    printf("insira um n�mero:");
    scanf("%d", &n);


    for ( i = 0; i < n; i++)
    {
        printf("insira os n�meros: \n");
        scanf("%d", &val);

        if (val>maiorval)
        {
            maiorval=val;
        }

        if (val<menorval)
        {
            menorval=val;
        }   
    }

    printf("o maior valor �: %d\n", maiorval);
    printf("o menor valor �: %d\n", menorval);

//haveria a necessidade de adicionar um biblioteca <limits.h> para iniciar as vari�veis com valores extremos!!

    return 0;
}