#include<stdio.h>
#include<locale.h>
    int main(){
    setlocale (LC_ALL, "");
     
     int i, tamanho;

     printf("digite o tamanho do vetor: ");
     scanf("%d", &tamanho);

     int v[tamanho];

//cadastrar os números digitados pelo usuário
    for(i=0; i<tamanho; i++){
        printf("digite um número: ");
        scanf("%d", &v[i]);
    }

//exibir os números do vetor, na ordem inversa
    for(i=tamanho-1; i>=0; i--){
        printf("%d/n", v[i]);
    }

     return 0;
}