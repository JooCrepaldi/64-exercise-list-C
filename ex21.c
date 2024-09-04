#include<stdio.h>
#include<locale.h>
    int main(){
    setlocale (LC_ALL, "");

        int x;

            printf("escreva um número:");
            scanf("%i", &x);

            if (x<0)
            {
                printf("esse número é negativo");
            }

            else
            {
                printf("esse número é positivo");
            }
            
            
}