#include<stdio.h>
#include<locale.h>
    int main(){
    setlocale (LC_ALL, "");

        float a, r, v;

        printf("escreva a altura da lata:");
        scanf("%f",&a);

        printf("escreva o raio da lata:");
        scanf("%f",&r);

        v = 3.14159*r*r*a;

        printf("o volume da lata de óleo é ---> %f", v);

        return 0;

    }