#include<stdio.h>
#include<locale.h>
    int main(){
    setlocale (LC_ALL, "");

    int i, tamanho;
    int soma=0;

    printf("digite um número para os vetores X e Y:");
    scanf("%d", &tamanho);

    int x[tamanho], y[tamanho];

//cadastrar o vetor x

    for(i=0; i<tamanho; i++){
        printf("digite um número para x:");
        scanf("%d", &x[i]);
    }

 //cadastrar o vetor y

    for(i=0; i<tamanho; i++){
        printf("digite um número para y:");
        scanf("%d", &y[i]);
    }

//realizar o produto

    for (i = 0; i < tamanho; i++)
    {
        soma+=x[i]*y[i];
    }

//exibir

    printf("%d",soma);

     return 0;
}