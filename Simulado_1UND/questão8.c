#include <stdio.h>
#include <math.h>

#define PI 3.14159265

int main() {
    double r, area, volume;

    printf("Digite o valor do raio (r): ");
    scanf("%lf", &r);

    if (r < 0) {
        printf("Raio invalido!\n");
        return 1;
    }

    area = 4.0 * PI * pow(r, 2);             
    volume = (4.0 / 3.0) * PI * pow(r, 3);   

    printf("Area da superficie: %.3f\n", area);
    printf("Volume: %.3f\n", volume);

    return 0;
}