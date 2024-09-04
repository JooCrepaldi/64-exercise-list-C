#include <stdio.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "");

    int a[5];
    int b[8];
    int i;
    int c;

//lendo a
    for ( i = 0; i < 5; i++)
    {
        printf("digite os valores de A:");
        scanf("%d", &a[i]);
    }

//lendo b
    for ( i = 0; i < 8; i++)
    {
        printf("digite os valores de B:");
        scanf("%d", &b[i]);
    }





    c=0;
    for ( i = 0; i < 5; c++)
    {
        if (a[i]==b[c])
        {
           printf("%d\n", a[i]);
        }

        if (c==7)
        {
            c=0;
            i++;
        }  
    }
    
    return 0;
}