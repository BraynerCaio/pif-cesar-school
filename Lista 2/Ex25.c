#include <stdio.h>

#define TAXA_GRATIFICACAO 0.05
#define TAXA_IMPOSTO 0.07

int main(void) {
    double salarioBase;
    double gratificacao, totalBruto, imposto, salarioLiquido;

    printf("Digite o salario-base do funcionario: ");
    scanf("%lf", &salarioBase);

    gratificacao = salarioBase * TAXA_GRATIFICACAO;
    totalBruto = salarioBase + gratificacao;
    imposto = totalBruto * TAXA_IMPOSTO;
    salarioLiquido = totalBruto - imposto;

    printf("Gratificacao (5%%): R$ %.2f\n", gratificacao);
    printf("Total bruto (salario + gratificacao): R$ %.2f\n", totalBruto);
    printf("Imposto retido (7%% sobre o total bruto): R$ %.2f\n", imposto);
    printf("Salario liquido a receber: R$ %.2f\n", salarioLiquido);

    return 0;
}