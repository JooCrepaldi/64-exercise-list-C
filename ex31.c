#include <stdio.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "");
    
    int n;
    int sp = 0;
    int si = 0;

    printf("Digite números positivos e um número negativo para finalizar:\n");

    while (1) {
        scanf("%d", &n);

        if (n<0) {
            break;
        }

        if (n % 2 == 0) {
            printf("%d é par\n", n);
            sp += n;
        } else {
            printf("%d é í­mpar\n", n);
            si += n;
        }
    }

    printf("Soma total dos números pares: %d\n", sp);
    printf("Soma total dos números í­mpares: %d\n", si);

    return 0;
}
