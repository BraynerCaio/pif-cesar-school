#include <stdio.h>

#define VALOR_HORA 45.00
#define PERC_GRATIFICACAO 0.05
#define PERC_IMPOSTO 0.08

int main() {
    double horas, bruto, gratificacao, imposto, liquido;

    printf("Digite o numero de horas trabalhadas: ");
    scanf("%lf", &horas);

    if (horas < 0) {
        printf("Valor invalido!\n");
        return 1;
    }

    bruto = horas * VALOR_HORA;
    gratificacao = bruto * PERC_GRATIFICACAO;
    imposto = bruto * PERC_IMPOSTO;
    liquido = bruto + gratificacao - imposto;

    printf("Horas trabalhadas : %.2f\n", horas);
    printf("Valor da hora     : R$ %.2f\n", VALOR_HORA);
    printf("Salario bruto     : R$ %.2f\n", bruto);
    printf("(+) Gratificacao 5%%: R$ %.2f\n", gratificacao);
    printf("(-) Imposto 8%%    : R$ %.2f\n", imposto);
    printf("--------------------\n");
    printf("Salario liquido   : R$ %.2f\n", liquido);

    return 0;
}