#include <stdio.h>

#define TAXA_DIARIA 30.00
#define TAXA_IMPOSTO 0.08

int main(void) {
    int diasTrabalhados;
    double salarioBruto, imposto, salarioLiquido;

    printf("Digite o numero de dias uteis trabalhados: ");
    scanf("%d", &diasTrabalhados);

    salarioBruto = diasTrabalhados * TAXA_DIARIA;
    imposto = salarioBruto * TAXA_IMPOSTO;
    salarioLiquido = salarioBruto - imposto;

    printf("Salario bruto: R$ %.2f\n", salarioBruto);
    printf("Imposto retido na fonte (8%%): R$ %.2f\n", imposto);
    printf("Salario liquido: R$ %.2f\n", salarioLiquido);

    return 0;
}