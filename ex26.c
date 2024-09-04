#include <stdio.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "");

    int x;

    x=100;
    while(x>=1){
        printf("%d\n",x);
        x--;
    }

    return 0;
}