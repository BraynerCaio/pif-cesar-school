#include <stdio.h>

#define FATOR_CONVERSAO 3.6

int main(void) {
    float velocidadeKmH;
    float velocidadeMS;

    printf("Digite a velocidade em km/h: ");
    scanf("%f", &velocidadeKmH);

    velocidadeMS = velocidadeKmH / FATOR_CONVERSAO;

    printf("Velocidade em m/s: %.2f m/s\n", velocidadeMS);

    return 0;
}