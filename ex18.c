#include<stdio.h>
#include<locale.h>
    int main(){
    setlocale (LC_ALL, "");

        int codigo;

            printf("escreva o c�digo:");
            scanf("%i", &codigo);

                switch (codigo)
                {
                case 1:
                    printf("c�digo v�lido - um");
                    break;

                case 2:
                    printf("c�digo v�lido - dois");
                    break;

                case 3:
                    printf("c�digo v�lido - tr�s");
                    break;
                
                default:
                    printf("c�digo inv�lido");
                    break;
                }
}