#include<stdio.h>
#include<locale.h>
    int main(){
    setlocale (LC_ALL, "");

        float c, f;

            printf("escreva um valor em graus Celsius:");
            scanf("%f",&c);

            f = (9*c+160)/5;

            printf("a convers�o do valor de Celcius para Fahrenheit �: %f", f);

            return 0;

    }