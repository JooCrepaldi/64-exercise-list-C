#include <stdio.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "");

    int x=1;
    
    while (x<=2000)
    {
        printf("%d\n",x);
        x++;
    }
    
    return 0;
}