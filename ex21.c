#include<stdio.h>
#include<locale.h>
    int main(){
    setlocale (LC_ALL, "");

        int x;

            printf("escreva um n�mero:");
            scanf("%i", &x);

            if (x<0)
            {
                printf("esse n�mero � negativo");
            }

            else
            {
                printf("esse n�mero � positivo");
            }
            
            
}