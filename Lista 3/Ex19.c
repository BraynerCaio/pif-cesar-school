#include <stdio.h>

int main() {
    int n, i;
    long long a = 1, b = 1, proximo;

    printf("Digite o numero do termo de Fibonacci desejado (N de 1 a 90): ");
    scanf("%d", &n);

    
    if (n < 1 || n > 90) {
        printf("N invalido! Use um valor entre 1 e 90.\n");
        return 1;
    }

    printf("Termos ate N = %d:\n", n);
    for (i = 1; i <= n; i++) {
        printf("%lld ", a);
        proximo = a + b;
        a = b;
        b = proximo;
    }

    
    printf("\n\nO termo %d da sequencia de Fibonacci e %lld\n", n, b - a);

    return 0;
}