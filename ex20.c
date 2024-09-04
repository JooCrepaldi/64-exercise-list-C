#include<stdio.h>
#include<locale.h>
    int main(){
    setlocale (LC_ALL, "");

        int a,b,c;

            printf("escreva um número para A:");
            scanf("%i", &a);

            printf("escreva um número para B:");
            scanf("%i", &b);

            printf("escreva um número para C:");
            scanf("%i", &c);


                if ((a<=0) || (b<=0) || (c<=0))
                {
                    printf("valor inválido");
                }
                
                if ((a>b) && (b>c))
                {
                    printf("o menor multiplicado pelo maior: %i \n", (c*a));
                    printf("o maior dividido pelo menor: %i \n", (a/c));
                }


                if ((a>c) && (c>b))
                {
                    printf("o menor multiplicado pelo maior %i \n", (b*a));
                    printf("o maior dividido pelo menor: %i \n", (a/b));
                }


                if ((b>a) && (a>c))
                {
                    printf("o menor multiplicado pelo maior %i \n", (c*b));
                    printf("o maior dividido pelo menor: %i \n", (b/c));
                }
                

                if ((b>c) && (c>a))
                {
                    printf("o menor multiplicado pelo maior %i \n", (a*b));
                    printf("o maior dividido pelo menor: %i \n", (b/a));
                }
            

                if ((c>a) && (a>b))
                {
                    printf("o menor multiplicado pelo maior %i \n", (b*c));
                    printf("o maior dividido pelo menor: %i \n", (c/b));
                }
                

                if ((c>b) && (b>a))
                {
                    printf("o menor multiplicado pelo maior %i \n", (a*c));
                    printf("o maior dividido pelo menor: %i \n", (c/a));
                }
            
            

}