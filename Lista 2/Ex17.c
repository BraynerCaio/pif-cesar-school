#include <stdio.h>


int main() {
    float pi = (float) 3.14;
    float raio;
    float area, circunferencia;

    printf("Digite o raio do circulo: ");
    scanf("%f", &raio);

    area = PI * raio * raio;
    circunferencia = 2 * PI * raio;

    printf("Area: %.2f\n", area);
    printf("Circunferencia: %.2f\n", circunferencia);

    return 0;
}