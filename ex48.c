#include <stdio.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "");

    int max=3;
    char nomes[max][40];
    int i, idade[3];
    
    for ( i = 0; i < max; i++)
    {
        printf("insira o nome das candidatas:\n");
        fflush(stdin);
        gets(nomes[i]);
    }

    for ( i = 0; i < max; i++)
    {
        printf("agora insira a idade das candidatas:\n");
        scanf("%d", &idade[i]);
    }
    

    for ( i = 0; i < max; i++)
    {
        if (idade[i]<=20 && idade[i]>=18)
        {
            printf("Candidata: %s, Idade: %d estão dentro do intervalo permitido.\n", nomes[i], idade[i]);
        }
        
    }
    
    













    return 0;
}