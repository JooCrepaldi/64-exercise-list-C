#include<stdio.h>
#include<locale.h>
    int main(){
    setlocale (LC_ALL, "");

        int op,n1,n2;

        printf("1 – Verificar se um dos números lidos é ou não múltiplo do outro\n");
        printf("2 – Verificar se os dois números lidos são pares\n");
        printf("3 – Verificar se a média dos dois números é maior ou igual a 7.\n");
        printf("4 – Sair\n");

        printf("escreva um número:");
        scanf("%d", &n1);

        printf("escreva outro número:");
        scanf("%d", &n2);

        printf("escreva uma opção:");
        scanf("%d", &op);

        switch (op)
        {
        case 1:

            if (n1%n2=0)
            {
                printf("%d é multiplo de %d", n1, n2);
            }

            else
            {
                printf("%d não é multiplo de %d", n1,n2);
            }

            break;

        case 2:

            n1%2=0 && n2%2=0

            break;

        case 3:

            n1+n2/2

            break;

        case 4:
            break;
        
        default:
            break;
        }