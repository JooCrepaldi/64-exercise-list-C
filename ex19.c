#include<stdio.h>
#include<locale.h>
    int main(){
    setlocale (LC_ALL, "");

        int a,b,c;

            printf("escreva um valor para A:");
            scanf("%i", &a);

            printf("escreva um valor para B:");
            scanf("%i", &b);

            printf("escreva um valor para C:");
            scanf("%i", &c);


                if ((a+b>c) && (b+c>a) && (a+c>b))
                {

                    if ((a==b) && (b==c) && (a==c))
                    {
                        printf("esse é um triângulo equilátero");
                    }

                    else if ((a==b) || (b==c) || (a==c))
                    {
                        printf("esse é um triângulo isóceles");
                    }

                    else
                    {
                        printf("esse é um triângulo escaleno");
                    }

                }

                else{
                    printf("esse não é um triângulo");
                }
                
                

        return 0;
            
}