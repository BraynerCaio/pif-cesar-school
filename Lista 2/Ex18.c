#include <stdio.h>
#include <math.h>

#define PI 3.141593

int main(void) {
    float raio;
    float area, volume;

    printf("Digite o raio da esfera: ");
    scanf("%f", &raio);

    area = 4.0f * PI * powf(raio, 2);
    volume = (4.0f / 3.0f) * PI * powf(raio, 3);

    printf("Area de superficie: %.2f\n", area);
    printf("Volume: %.2f\n", volume);

    return 0;
}