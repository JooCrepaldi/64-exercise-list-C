#include<stdio.h>
#include<locale.h>
    int main(){
    setlocale (LC_ALL, "");

        int n1,n2;

            printf("escreva um número para n1:");
            scanf("%i", &n1);

            printf("escreva outro número para n2:");
            scanf("%i",&n2);

            if (n1==n2)
            {
                printf("%i é igual -> %i", n1,n2);
            }

            if (n1>n2)
            {
                printf("%i é maior -> %i \n", n1,n2);
                printf("%i é maior ou igual -> %i \n", n1,n2);
                printf("%i é diferente -> %i", n1,n2);
            }
            
            if (n1<n2)
            {
                printf("%i é menor -> %i \n", n1,n2);
                printf("%i é menor ou igual -> %i \n", n1,n2);
                printf("%i é diferente -> %i \n", n1,n2);
            }
           
}