#include<stdio.h>
#include<locale.h>
    int main(){
    setlocale (LC_ALL, "");

        int x;

            printf("escreva um número: ");
            scanf("%i", &x);

            if ((x>=0) && (x<=9))
            {
               printf("valor válido --> %i", x); 
            }
            
            else{
                printf("valor INVÁLIDO --> %i", x);
            }


}