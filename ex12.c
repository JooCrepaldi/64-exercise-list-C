#include<stdio.h>
#include<locale.h>
    int main(){
    setlocale (LC_ALL, "");

        int x;
            printf("escreva um número inteiro: ");
            scanf("%i", &x);

            if(x>=0)
            {
                printf("o módulo desse número é: %i", x);
            }
            else
            {
                printf("o módulo desse número é: %i", x*(-1));
            }

            return 0;
}