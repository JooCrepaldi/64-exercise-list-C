    #include<stdio.h>
    #include<locale.h>
    int main(){
    setlocale (LC_ALL, "");

        int ano, mes, dia, iano, imes, idia;

            printf("escreva o ano em que você nasceu:");
            scanf("%d",&ano);

            printf("escreva o mês(numérico) em que nasceu:");
            scanf("%d",&mes);

            printf("escreva o dia em que nasceu:");
            scanf("%d",&dia);

            iano = 2024-ano;

            printf("a sua idade em anos é: %d \n", iano);

            imes = iano*12;

            printf("a sua idade em mês é: %d \n", imes);

            idia = imes*30;

            printf("a sua idade em dias é: %d \n", idia);

        retun 0;
    }