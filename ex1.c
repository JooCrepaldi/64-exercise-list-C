#include<stdio.h>

int main(){
    int max,min;
    float estoquemedio;

        printf("numero maximo de pecas:");
        scanf("%i", &max);

        printf("numero minimo de pecas:");
        scanf("%i", &min);

        estoquemedio = (max+min)/2;
        
        printf("o estoque medio e: %f", estoquemedio);
        
        return 0;
}
