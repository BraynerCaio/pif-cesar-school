#include <stdio.h>

int main() {
    int a, b, c;
    double media;

    printf("Digite o primeiro valor inteiro: ");
    scanf("%d", &a);

    printf("Digite o segundo valor inteiro: ");
    scanf("%d", &b);

    printf("Digite o terceiro valor inteiro: ");
    scanf("%d", &c);

    media = (double)(a + b + c) / 3;

    printf("A media aritmetica simples e: %.2f\n", media);

    return 0;
}