#include <stdio.h>

#define VALOR_HORA_NORMAL 10.00
#define VALOR_HORA_EXTRA 15.00
#define FAIXA_ISENCAO 12000.00
#define TAXA_IMPOSTO 0.10

int main(void) {
    float horasNormais, horasExtras;
    float salarioBruto;
    float imposto;

    printf("Digite o total de horas normais trabalhadas no ano: ");
    scanf("%f", &horasNormais);
    printf("Digite o total de horas extras trabalhadas no ano: ");
    scanf("%f", &horasExtras);

    salarioBruto = horasNormais * VALOR_HORA_NORMAL + horasExtras * VALOR_HORA_EXTRA;

    imposto = (salarioBruto > FAIXA_ISENCAO)
                  ? (salarioBruto - FAIXA_ISENCAO) * TAXA_IMPOSTO
                  : 0.0f;

    printf("Salario anual bruto: R$ %.2f\n", salarioBruto);
    printf("Imposto progressivo a pagar: R$ %.2f\n", imposto);

    return 0;
}