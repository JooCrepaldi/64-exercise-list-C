#include<stdio.h>
#include<locale.h>
    int main(){
    setlocale (LC_ALL, "");

        int n1,n2;

            printf("escreva um n�mero para n1:");
            scanf("%i", &n1);

            printf("escreva outro n�mero para n2:");
            scanf("%i",&n2);

            if (n1==n2)
            {
                printf("%i � igual -> %i", n1,n2);
            }

            if (n1>n2)
            {
                printf("%i � maior -> %i \n", n1,n2);
                printf("%i � maior ou igual -> %i \n", n1,n2);
                printf("%i � diferente -> %i", n1,n2);
            }
            
            if (n1<n2)
            {
                printf("%i � menor -> %i \n", n1,n2);
                printf("%i � menor ou igual -> %i \n", n1,n2);
                printf("%i � diferente -> %i \n", n1,n2);
            }
           
}