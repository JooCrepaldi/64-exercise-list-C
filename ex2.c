#include <stdio.h>

int main(){
    float ct,vl,rl;

        printf("coloque um valor em dolar:");
        scanf("%f",&vl);

        printf("coloque cotacao do dolar:");
        scanf("%f",&ct);

        rl = (vl*ct);

        printf("o valor em reais e: %f", rl);
        
        return 0;
}