#include<stdio.h>
#include<locale.h>
    int main(){
    setlocale (LC_ALL, "");
     
     int i, tamanho;

     printf("digite o tamanho do vetor: ");
     scanf("%d", &tamanho);

     int v[tamanho];

//cadastrar os n�meros digitados pelo usu�rio
    for(i=0; i<tamanho; i++){
        printf("digite um n�mero: ");
        scanf("%d", &v[i]);
    }

//exibir os n�meros do vetor, na ordem inversa
    for(i=tamanho-1; i>=0; i--){
        printf("%d/n", v[i]);
    }

     return 0;
}