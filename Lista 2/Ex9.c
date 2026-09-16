#include <stdio.h>

int main() {
    int a, b;

    printf("Digite dois numeros inteiros: ");
    scanf("%d %d", &a, &b);

    int soma = a + b;
    int subtracao = a - b;
    int multiplicacao = a * b;

    float divisao = (float) a / (float) b;

    printf("Soma: %d\n", soma);
    printf("Subtracao: %d\n", subtracao);
    printf("Multiplicacao: %d\n", multiplicacao);
    printf("Divisao: %.2f\n", divisao);

    return 0;
}