#include <stdio.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "");

    int i,n;
    int val;
    int maiorval=0,menorval;

    printf("insira um número:");
    scanf("%d", &n);


    for ( i = 0; i < n; i++)
    {
        printf("insira os números: \n");
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

    printf("o maior valor é: %d\n", maiorval);
    printf("o menor valor é: %d\n", menorval);

//haveria a necessidade de adicionar um biblioteca <limits.h> para iniciar as variáveis com valores extremos!!

    return 0;
}