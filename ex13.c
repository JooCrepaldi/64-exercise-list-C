#include<stdio.h>
#include<locale.h>
    int main(){
    setlocale (LC_ALL, "");

        int n1,n2,n3;

            printf("escreva um n�mero 1:");
            scanf("%i", &n1);

            printf("escreva um n�mero 2:");
            scanf("%i", &n2);

            printf("escreva um n�mero 3:");
            scanf("%i", &n3);

            if ((n1<n2) && (n2<n3))
            {
                printf("a ordem decescente �: %i, %i, %i", n3,n2,n1);
            }

            if ((n1<32) && (n3<n1))
            {
                printf("a ordem decescente �: %i, %i, %i", n2,n3,n1);
            }


            if ((n2<n1) && (n1<n3))
            {
                printf("a ordem decescente �: %i, %i, %i", n3,n1,n2);
            }

            if ((n2<n3) && (n3<n1))
            {
                printf("a ordem decescente �: %i, %i, %i", n1,n3,n2);
            }

            if ((n3<n2) && (n2<n1))
            {
                printf("a ordem decescente �: %i, %i, %i", n1,n2,n3);
            }

            if ((n3<n1) && (n1<n2))
            {
                printf("a ordem decescente �: %i, %i, %i", n2,n1,n3);
            }
            
}