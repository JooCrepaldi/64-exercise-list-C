#include <stdio.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "");

    int num;
    double media;
    int a7 = 0;
    int acima = 0;
    int a5 = 0;
    int al = 0;
    int x = 0;

    // num
    printf("insira a quantidade de alunos da turma:");
    scanf("%d", &num);

    // criando variável
    double notas[num];
    int numAntigo = num;

    // cadastrando no vetor
    for (num = 0; num < numAntigo; num++)
    {
        printf("insira a nota do aluno %d:\n", al);
        scanf("%lf", &notas[num]);
        al++;
    }

    // comparando

    for (num = 0; num < numAntigo; num++)
    {
        if (notas[num] > 7)
        {
            a7++;
        }
    }

    for (num = 0; num < numAntigo; num++)
    {
        if (notas[num] < 5)
        {
            a5++;
        }
        if(notas[num] > 5) acima = 1;
    }

    if (acima == 0)
    {
        printf("não há nenhum aluno com nota acima de 5.\n");
    }

    // calculando a soma
    for (num = 0; num < numAntigo; num++)
    {
        x += notas[num];
    }

    // calculando a média
    media = x / num;
    

    // exibindo
    printf("média aritmética da sala ---> %.2lf\n", media);
    printf("aluno acima de 7 ---> %d\n", a7);

    return 0;
}