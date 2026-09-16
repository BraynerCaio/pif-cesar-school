#include <stdio.h>

int main(void) {
    float nota1, nota2, nota3, nota4;
    float mediaSimples, mediaPonderada;
    float peso1 = 1.0f, peso2 = 1.0f, peso3 = 2.0f, peso4 = 2.0f;
    float somaPesos;

    printf("Digite a nota 1: ");
    scanf("%f", &nota1);
    printf("Digite a nota 2: ");
    scanf("%f", &nota2);
    printf("Digite a nota 3: ");
    scanf("%f", &nota3);
    printf("Digite a nota 4: ");
    scanf("%f", &nota4);

    mediaSimples = (nota1 + nota2 + nota3 + nota4) / 4.0f;

    somaPesos = peso1 + peso2 + peso3 + peso4;
    mediaPonderada = (nota1 * peso1 + nota2 * peso2 + nota3 * peso3 + nota4 * peso4) / somaPesos;

    printf("Media aritmetica simples: %.2f\n", mediaSimples);
    printf("Media ponderada: %.2f\n", mediaPonderada);

    return 0;
}