#include <stdio.h>

#define NUMERO_FIOS 3

int main(void) {
    float comprimento, largura;
    float precoUnitario;
    float perimetro, totalArame, custoTotal;

    printf("Digite o comprimento do terreno (m): ");
    scanf("%f", &comprimento);
    printf("Digite a largura do terreno (m): ");
    scanf("%f", &largura);
    printf("Digite o preco unitario do metro de arame farpado (R$): ");
    scanf("%f", &precoUnitario);

    perimetro = 2 * (comprimento + largura);
    totalArame = perimetro * NUMERO_FIOS;
    custoTotal = totalArame * precoUnitario;

    printf("Perimetro do terreno: %.2f m\n", perimetro);
    printf("Total de arame a ser comprado (3 fios): %.2f m\n", totalArame);
    printf("Custo total do cercamento: R$ %.2f\n", custoTotal);

    return 0;
}