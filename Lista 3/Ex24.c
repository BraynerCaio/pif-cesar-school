#include <stdio.h>

int main() {
    int n, i, j;

    do {
        printf("Digite uma dimensao impar N (3 a 19): ");
        scanf("%d", &n);
        if (n < 3 || n > 19 || n % 2 == 0) {
            printf("Valor invalido! N deve ser impar entre 3 e 19.\n");
        }
    } while (n < 3 || n > 19 || n % 2 == 0);

    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {
            if (j == i || j == n + 1 - i) {     
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}