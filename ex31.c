#include <stdio.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "");
    
    int n;
    int sp = 0;
    int si = 0;

    printf("Digite n�meros positivos e um n�mero negativo para finalizar:\n");

    while (1) {
        scanf("%d", &n);

        if (n<0) {
            break;
        }

        if (n % 2 == 0) {
            printf("%d � par\n", n);
            sp += n;
        } else {
            printf("%d � �mpar\n", n);
            si += n;
        }
    }

    printf("Soma total dos n�meros pares: %d\n", sp);
    printf("Soma total dos n�meros �mpares: %d\n", si);

    return 0;
}
