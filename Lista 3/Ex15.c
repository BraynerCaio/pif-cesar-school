#include <stdio.h>

int main() {
    int num, i, encontrou = 0;

    printf("Digite um numero limite inteiro positivo (NUM): ");
    scanf("%d", &num);

    if (num <= 0) {
        printf("NUM deve ser positivo.\n");
        return 1;
    }

    printf("Multiplos de 3 e de 5 entre 1 e %d:\n", num);
    for (i = 1; i <= num; i++) {
        if (i % 3 == 0 && i % 5 == 0) {
            printf("%d ", i);
            encontrou = 1;
        }
    }

    if (!encontrou) {
        printf("Nenhum numero no intervalo e multiplo de 3 e de 5 ao mesmo tempo.");
    }
    printf("\n");

    return 0;
}