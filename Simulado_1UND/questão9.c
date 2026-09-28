#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c, p, area;

    printf("Digite os lados do triangulo (a b c): ");
    scanf("%lf %lf %lf", &a, &b, &c);

    
    if (a <= 0 || b <= 0 || c <= 0 || a >= b + c || b >= a + c || c >= a + b) {
        printf("Os valores informados nao formam um triangulo.\n");
        return 1;
    }

    p = (a + b + c) / 2.0;                     
    area = sqrt(p * (p - a) * (p - b) * (p - c));

    printf("Semiperimetro: %.2f\n", p);
    printf("Area do triangulo: %.2f\n", area);

    return 0;
}