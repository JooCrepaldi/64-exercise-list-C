#include<stdio.h>
#include<locale.h>
    int main(){
    setlocale (LC_ALL, "");

        int a,b,c,d;

            printf("escreva um número para A:");
            scanf("%i",&a);

            printf("escreva um numero para B:");
            scanf("%i",&b);

            printf("escreva um número para C:");
            scanf("%i",&c);

            printf("escreva um numero para D:");
            scanf("%i",&d);


            printf("a adição de A com B é = %i \n",a+b);
            printf("a multiplicação de A com B é = %i \n",a*b);

            printf("a adição de A com C é = %i \n",a+c);
            printf("a multiplicação de A com C é = %i \n",a*c);

            printf("a adição de A com D é = %i \n",a+d);
            printf("a multiplicação de A com D é = %i \n",a*d);

            printf("a adição de B com C é = %i \n",b+c);
            printf("a multiplicação de B com C é = %i \n",b*c);

            printf("a adição de B com D é = %i \n",b+d);
            printf("a multiplicação de B com D é = %i \n",b*d);

            printf("a adição de C com D é = %i \n",c+d);
            printf("a multiplicação de C com D é = %i \n",c*d);

        return 0;
}