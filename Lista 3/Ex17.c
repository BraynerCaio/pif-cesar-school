#include <stdio.h>

int main() {
    double nota, soma = 0.0, maior = 0.0, menor = 0.0;
    int total = 0;

    printf("Digite as notas (0.0 a 10.0). Digite -1.0 para encerrar.\n");

    while (1) {
        printf("Nota: ");
        scanf("%lf", &nota);

        if (nota == -1.0) {
            break;
        }
        if (nota < 0.0 || nota > 10.0) {
            printf("Nota invalida! Digite um valor entre 0.0 e 10.0.\n");
            continue;
        }

        if (total == 0) {
            maior = nota;
            menor = nota;
        } else {
            if (nota > maior) maior = nota;
            if (nota < menor) menor = nota;
        }
        soma += nota;
        total++;
    }

    if (total == 0) {
        printf("Nenhum aluno avaliado.\n");
    } else {
        printf("\nTotal de alunos avaliados: %d\n", total);
        printf("Maior nota: %.2f\n", maior);
        printf("Menor nota: %.2f\n", menor);
        printf("Media geral: %.2f\n", soma / total);
    }

    return 0;
}