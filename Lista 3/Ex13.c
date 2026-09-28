#include <stdio.h>

int main() {
    int n, i;
    long long int fatorial = 1;

    printf("Digite um inteiro N para calcular N!: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Erro: fatorial nao e definido para numeros negativos.\n");
        return 1;
    }

   
    if (n > 20) {
        printf("Erro: %d! estoura a capacidade de um long long int (maximo N = 20).\n", n);
        return 1;
    }

   
    for (i = 2; i <= n; i++) {
        fatorial *= i;
    }

    printf("%d! = %lld\n", n, fatorial);

    return 0;
}