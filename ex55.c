#include <stdio.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "");

    char frase[50];
    int i, j = 0;

    printf("escreva uma frase:\n");
    fflush(stdin);
    gets(frase);

    int contespaco = 0;

    for (i = 0; i < strlen(frase); i++)
    {
        if (frase[i] == ' ')
        {
            contespaco++;
        }
    }

    for (i = 0; i < strlen(frase); i++)
    {
        if (frase[i] != ' ')
        {
            frase[j++] = frase[i];
        }
    }
    frase[j] = '\0';

    printf("o número de espaços é: %d\n", contespaco);
    printf(frase);

    return 0;
}