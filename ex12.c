#include<stdio.h>
#include<locale.h>
    int main(){
    setlocale (LC_ALL, "");

        int x;
            printf("escreva um n�mero inteiro: ");
            scanf("%i", &x);

            if(x>=0)
            {
                printf("o m�dulo desse n�mero �: %i", x);
            }
            else
            {
                printf("o m�dulo desse n�mero �: %i", x*(-1));
            }

            return 0;
}