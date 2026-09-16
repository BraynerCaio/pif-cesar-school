#include <stdio.h>
#include <math.h>

int main(void) {
    double ladoA, ladoB, hipotenusa;

    printf("Digite o comprimento do cateto a: ");
    scanf("%lf", &ladoA);
    printf("Digite o comprimento do cateto b: ");
    scanf("%lf", &ladoB);

    hipotenusa = sqrt(pow(ladoA, 2) + pow(ladoB, 2));

    printf("Comprimento da hipotenusa: %.2f\n", hipotenusa);

    return 0;
}