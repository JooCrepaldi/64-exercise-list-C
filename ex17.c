#include<stdio.h>
#include<locale.h>
    int main(){
    setlocale (LC_ALL, "");

        int x;

            printf("escreva um n�mero: ");
            scanf("%i", &x);

            if ((x>=0) && (x<=9))
            {
               printf("valor v�lido --> %i", x); 
            }
            
            else{
                printf("valor INV�LIDO --> %i", x);
            }


}