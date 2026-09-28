#include <stdio.h>

int main() {
    double valor, soma = 0.0, media;
    int quantidade = 0;

    printf("Digite valores positivos (um valor negativo encerra):\n");
    scanf("%lf", &valor);

    while (valor >= 0) {          
        soma += valor;
        quantidade++;
        scanf("%lf", &valor);
    }

    printf("\nQuantidade de valores validos: %d\n", quantidade);
    printf("Soma total: %.2f\n", soma);

    if (quantidade > 0) {
        media = soma / quantidade;
        printf("Media aritmetica: %.2f\n", media);
    } else {
        printf("Nenhum valor valido foi digitado; media indisponivel.\n");
    }

    return 0;
}