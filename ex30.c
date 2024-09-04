#include <stdio.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "");

    int x,y;

    printf("insira um número:");
    scanf("%d", &y);

    x=1;
    while(x<=10){
        printf("%dX%d=%d\n",y,x,(x*y));
        x++;
    }

    return 0;
}