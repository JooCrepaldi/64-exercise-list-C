#include<stdio.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "");

    int num;
    int i=1;
    float valor;
    float maiorv;
    float menorv;

    printf("insira uma quantidade");
    scanf("%d", &num);

    while (i<num);
    {
        printf("insira um número:");
        scanf("%f", &valor);

        if (num==1)
        {
            maiorv=valor;
            menorv=valor;
        }

        if (maiorv<valor)
        {
            maiorv=valor;
        }

        if (menorv<valor)
        {
            menorv=valor;
        }  
    }
    
    printf("o maior valor é %f\n", maiorv);
    printf("o menor valor é %f\n", menorv);


    return 0;
}