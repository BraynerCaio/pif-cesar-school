#include <stdio.h>

int main(){
    float alturaDegrauCm, alturaTotalM;
    float alturaTotalCm;
    int numeroDegraus;

    printf("Digite a altura de cada degrau (em cm): ");
    scanf("%f", &alturaDegrauCm);
    printf("Digite a altura total a ser alcancada (em metros): ");
    scanf("%f", &alturaTotalM);

    numeroDegraus = (int) ceil(alturaTotalCm / alturaDegrauCm);

    printf("Numero minimo de degraus a subir: %d\n", numeroDegraus);

    return 0;
}