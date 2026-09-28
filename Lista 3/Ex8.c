#include <stdio.h>

int main() {
    double nota;

    do {
        printf("Digite uma nota (0.0 a 10.0): ");
        scanf("%lf", &nota);

        if (nota < 0.0 || nota > 10.0) {
            printf("Erro: valor fora do intervalo! Tente novamente.\n");
        }
    } while (nota < 0.0 || nota > 10.0);

    printf("Nota registrada com sucesso!\n");

    return 0;
}