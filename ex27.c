#include <stdio.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "");

    int fat, n;

    printf("insira um n�mero:");
    scanf("%d", &n);

    for (fat = 1; n > 1; n--)
    {
        fat = fat * n;
    }

    printf("\n%d", fat);
    return 0;
}
