#include <stdio.h>

int main(void) {
    int opcao;
    float lado, base, altura, area;

    printf("=== Calculo de Areas de Figuras Planas ===\n");
    printf("1 - Quadrado\n");
    printf("2 - Retangulo\n");
    printf("3 - Triangulo retangulo\n");
    printf("Escolha uma opcao: ");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            printf("Digite o lado (L) do quadrado: ");
            scanf("%f", &lado);
            area = lado * lado;
            printf("Area do quadrado: %.2f\n", area);
            break;

        case 2:
            printf("Digite a base (B) do retangulo: ");
            scanf("%f", &base);
            printf("Digite a altura (H) do retangulo: ");
            scanf("%f", &altura);
            area = base * altura;
            printf("Area do retangulo: %.2f\n", area);
            break;

        case 3:
            printf("Digite a base (B) do triangulo retangulo: ");
            scanf("%f", &base);
            printf("Digite a altura (H) do triangulo retangulo: ");
            scanf("%f", &altura);
            area = (base * altura) / 2.0f;
            printf("Area do triangulo retangulo: %.2f\n", area);
            break;

        default:
            printf("Opcao invalida!\n");
    }

    return 0;
}