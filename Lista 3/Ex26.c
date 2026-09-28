#include <stdio.h>

int main() {
    int a, b, n, i, primo;
    long soma = 0;

    do {
        printf("Digite os inteiros positivos A e B (A < B): ");
        scanf("%d %d", &a, &b);
        if (a <= 0 || b <= 0 || a >= b) {
            printf("Valores invalidos! Devem ser positivos e A < B.\n");
        }
    } while (a <= 0 || b <= 0 || a >= b);

    printf("Primos no intervalo [%d, %d]:\n", a, b);

    for (n = a; n <= b; n++) {
        if (n < 2) {
            continue;                   
        }
        primo = 1;
        for (i = 2; i * i <= n; i++) {   
            if (n % i == 0) {
                primo = 0;
                break;
            }
        }
        if (primo) {
            printf("%d ", n);
            soma += n;
        }
    }

    printf("\nSoma dos primos encontrados: %ld\n", soma);

    return 0;
}