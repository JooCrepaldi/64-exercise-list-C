#include <stdio.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "");

    int i, cont, num;
    int matr, soma;

    printf("insira o n�mero de alunos:");
    scanf("%d", &num);

    float nota[num];

    cont = 1;

    for (i = 0; i < num; i++)
    {
        printf("insira o N� da matr�cula do %d aluno:\n", cont);
        scanf("%d", &matr);

        printf("insira a nota do %d aluno:\n", cont);
        scanf("%f", &nota[i]);

        soma += nota[i];

        cont++;
    }

    float media = soma / num;

    printf("A m�dia de nota da turma � %.2f\n", media);

    return 0;
}