#include <stdio.h>

int main() {
    int n, i;

    printf("Digite um inteiro positivo N: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("N deve ser positivo.\n");
        return 1;
    }

    
    for (i = 1; i <= 100; i++) {
        printf("%lld\t", (long long) n * i);
        if (i % 10 == 0) {
            printf("\n");
        }
    }

    return 0;
}