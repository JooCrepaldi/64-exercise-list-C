#include<stdio.h>
#include<locale.h>
    int main(){
    setlocale (LC_ALL, "");

        char nome;
        float rec,nota,n1,n2,n3,n4;

            printf("nome do aluno: ");
            scanf("%c", &nome);

            printf("1� nota do aluno: ");
            scanf("%f", &n1);

            printf("2� nota do aluno: ");
            scanf("%f", &n2);

            printf("3� nota do aluno: ");
            scanf("%f", &n3);

            printf("4� nota do aluno: ");
            scanf("%f", &n4);

                nota = (n1+n2+n3+n4)/4;

//erro por causa de muitos caracteres?//

            if (nota>=7)
            {
                printf("o aluno %c", nome,"foi aprovado com nota: %f", nota);
            }

            if (nota<=7)
            {
                printf("nota de recupera��o: ");
                scanf("%f", &rec);

                    nota = (n1+n2+n3+n4+rec)/5;

                if (nota>=7)
                {
                    printf("o aluno %c", nome,"foi aprovado com nota de recupera��o: %f", nota);
                }
                
                else{
                    printf("o aluno %c", nome,"foi reprovado com a nota: %f", nota);
                }

            }

        return 0;    
            
}