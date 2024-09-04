#include<stdio.h>
#include<locale.h>
    int main(){
    setlocale (LC_ALL, "");

        float n1,n2;

            printf("escreva um número para N1:");
            scanf("%f", &n1);

            printf("escreva um número para N2:");
            scanf("%f", &n2);

            if (n1>n2)
            {
                printf("maior número: %f \n", n1);
                printf("menor número: %f \n", n2);
            }
            
            if (n1<n2)
            {
                printf("maior número: %f \n", n2);
                printf("menor número: %f \n", n1);
            }

}