#include<stdio.h>
#include<locale.h>
    int main(){
    setlocale (LC_ALL, "");

        float n1,n2;

            printf("escreva um n�mero para N1:");
            scanf("%f", &n1);

            printf("escreva um n�mero para N2:");
            scanf("%f", &n2);

            if (n1>n2)
            {
                printf("maior n�mero: %f \n", n1);
                printf("menor n�mero: %f \n", n2);
            }
            
            if (n1<n2)
            {
                printf("maior n�mero: %f \n", n2);
                printf("menor n�mero: %f \n", n1);
            }

}