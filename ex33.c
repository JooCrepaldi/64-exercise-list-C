#include <stdio.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "");

    int i, cont, num;
    int matr, soma;

    printf("insira o número de alunos:");
    scanf("%d", &num);

    float nota[num];

    cont = 1;

    for (i = 0; i < num; i++)
    {
        printf("insira o Nº da matrícula do %d aluno:\n", cont);
        scanf("%d", &matr);

        printf("insira a nota do %d aluno:\n", cont);
        scanf("%f", &nota[i]);

        soma += nota[i];

        cont++;
    }

    float media = soma / num;

    printf("A média de nota da turma é %.2f\n", media);

    return 0;
}