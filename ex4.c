#include<stdio.h>
#include<locale.h>
    int main(){
    setlocale (LC_ALL, "");

        int a,b,c,d;

            printf("escreva um n�mero para A:");
            scanf("%i",&a);

            printf("escreva um numero para B:");
            scanf("%i",&b);

            printf("escreva um n�mero para C:");
            scanf("%i",&c);

            printf("escreva um numero para D:");
            scanf("%i",&d);


            printf("a adi��o de A com B � = %i \n",a+b);
            printf("a multiplica��o de A com B � = %i \n",a*b);

            printf("a adi��o de A com C � = %i \n",a+c);
            printf("a multiplica��o de A com C � = %i \n",a*c);

            printf("a adi��o de A com D � = %i \n",a+d);
            printf("a multiplica��o de A com D � = %i \n",a*d);

            printf("a adi��o de B com C � = %i \n",b+c);
            printf("a multiplica��o de B com C � = %i \n",b*c);

            printf("a adi��o de B com D � = %i \n",b+d);
            printf("a multiplica��o de B com D � = %i \n",b*d);

            printf("a adi��o de C com D � = %i \n",c+d);
            printf("a multiplica��o de C com D � = %i \n",c*d);

        return 0;
}