#include <stdio.h>

int main() {
    double nota;

    do {
        printf("Digite uma nota (0.0 a 10.0): ");
        scanf("%lf", &nota);

        if (nota < 0.0 || nota > 10.0) {
            printf("Erro: nota invalida! Tente novamente.\n");
        }
    } while (nota < 0.0 || nota > 10.0);

    printf("Nota valida registrada: %.1f\n", nota);

    return 0;
}