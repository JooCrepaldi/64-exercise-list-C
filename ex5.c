#include<stdio.h>
#include<locale.h>
    int main(){
    setlocale (LC_ALL, "");
        
        float temp, velomedia, distan, quantcombu;

        printf ("escreva o tempo gasto da viagem:");
        scanf("%f",&temp);

        printf("escreva a velocidade média da viagem:");
        scanf("%f",&velomedia);

        distan = (temp*velomedia);

        quantcombu = (distan/12);

        printf("a distância percorrida na viagem foi de: %f \n",distan);
        printf("a quantidade de combustível utilizado na viagem foi de: %f \n",quantcombu);

        return 0;
    }