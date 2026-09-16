#include <stdio.h>

#define PI 3.141593

int main() {
    float graus, radianos;

    printf("Digite o angulo em graus: ");
    scanf("%f", &graus);

    radianos = graus * (PI / 180.0);

    printf("O angulo de %.2f graus equivale a %.4f radianos\n", graus, radianos);

    return 0;
}