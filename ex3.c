#include<stdio.h>
#include<locale.h>

    int main(){
    setlocale(LC_ALL, "");
        float c,p,qv,cm,t;
        char n;
            printf("nome:");
            scanf("%c",&n);
            printf("c�digo da pe�a:");
            scanf("%f",&c);
            printf("pre�o unit�rio:");
            scanf("%f",&p);
            printf("quantidade pe�as vendidas:");
            scanf("%f",&qv);
            t = (qv*p);
            cm = (t*5)/100;
            printf("a comiss�o para pagamento e:%f", cm);
        return 0;
    }