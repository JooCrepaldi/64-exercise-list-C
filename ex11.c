#include<stdio.h>
#include<locale.h>
    int main(){
    setlocale (LC_ALL, "");

        int a,b;

            printf("coloque um valor para A: ");
            scanf("%i", &a);

            printf("coloque um valor para B: ");
            scanf("%i", &b);

            printf("A = %i  \n", b);
            printf("A = %i  \n", a);
}