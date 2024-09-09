#include <stdio.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "");

    int i, j=0;
    char v[100];
    char vogais[] = "aeiouAEIOU";

    printf("escreva a frase:\n");
    fflush(stdin);
    gets(v);

    for (i = 0; i < strlen(v); i++)
    {
        if (strchr(vogais, v[i]))//STRCHR procura caracteres dentro de um outro vetor!
        {
            printf("%c", v[i]);
        }
        
    }

    return 0;
}   