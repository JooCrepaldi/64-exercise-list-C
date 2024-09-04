#include<stdio.h>
#include<locale.h>
    int main(){
    setlocale (LC_ALL, "");

        int codigo;

            printf("escreva o código:");
            scanf("%i", &codigo);

                switch (codigo)
                {
                case 1:
                    printf("código válido - um");
                    break;

                case 2:
                    printf("código válido - dois");
                    break;

                case 3:
                    printf("código válido - três");
                    break;
                
                default:
                    printf("código inválido");
                    break;
                }
}