#include<stdio.h>
#include<locale.h>
    int main(){
    setlocale (LC_ALL, "");

        float f, c;

            printf("escreva uma temperatura em Fahrenheit:");
            scanf("%f",&f);

            c = (f-32)*5/9;

            printf("o valor da convers�o de Fahrenheit para Celcius � de: %f", c);

}