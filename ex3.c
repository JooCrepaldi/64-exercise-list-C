#include<stdio.h>
#include<locale.h>

    int main(){
    setlocale(LC_ALL, "");
        float c,p,qv,cm,t;
        char n;
            printf("nome:");
            scanf("%c",&n);
            printf("código da peça:");
            scanf("%f",&c);
            printf("preço unitário:");
            scanf("%f",&p);
            printf("quantidade peças vendidas:");
            scanf("%f",&qv);
            t = (qv*p);
            cm = (t*5)/100;
            printf("a comissão para pagamento e:%f", cm);
        return 0;
    }