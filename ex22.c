#include<stdio.h>
#include<locale.h>
    int main(){
    setlocale (LC_ALL, "");

        int x;

            printf("escreva um número:");
            scanf("%i", &x);

            if (x>0)
            {
                printf("A --> %i", x);
            }

            else{
                printf("B --> %i", x);
            }
            

}