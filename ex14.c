#include<stdio.h>
#include<locale.h>
    int main(){
    setlocale (LC_ALL, "");

        int n1,n2;

            printf("escreva um número: ");
            scanf("%i", &n1);

            printf("escreva outro número: ");
            scanf("%i", &n2);
            
            if (n1>n2)
            {
                printf("a diferenÃ§a dos números é: %i",(n1-n2));
            }

            if (n1<n2)
            {
                printf("a diferenÃ§a dos números é: %i",(n2-n1));
            }
            
            return 0;
}