#include <stdio.h>

int main() {
    int n, i, divisores = 0;

    printf("Digite um inteiro positivo N: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("N deve ser positivo.\n");
        return 1;
    }

    for (i = 1; i <= n; i++) {
        if (n % i == 0) {
            divisores++;
        }
    }

    printf("Quantidade de divisores de %d: %d\n", n, divisores);

    if (divisores == 2) {
        printf("%d e um numero primo (divisivel apenas por 1 e por ele mesmo).\n", n);
    } else {
        printf("%d NAO e um numero primo.\n", n);
    }

    return 0;
}