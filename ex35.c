#include <stdio.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "");

    int x;

    x=1;

    while (x<=100)
    {
        if (x%10==0)
        {
            printf("multiplo de 10!\n");
        }

        else
        {
            printf("%d\n", x);
        }

        x++;
    }
    


    return 0;
}