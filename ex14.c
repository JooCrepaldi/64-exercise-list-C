#include<stdio.h>
#include<locale.h>
    int main(){
    setlocale (LC_ALL, "");

        int n1,n2;

            printf("escreva um n�mero: ");
            scanf("%i", &n1);

            printf("escreva outro n�mero: ");
            scanf("%i", &n2);
            
            if (n1>n2)
            {
                printf("a diferença dos n�meros �: %i",(n1-n2));
            }

            if (n1<n2)
            {
                printf("a diferença dos n�meros �: %i",(n2-n1));
            }
            
            return 0;
}