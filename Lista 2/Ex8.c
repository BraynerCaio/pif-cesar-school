#include <stdio.h>

int main(){
    int num;

    printf("Escreva um número inteiro: ");
    scanf("%d", &num);

    int quadrado = num * num;
    float decima_parte = (float) num / 10.0;

    printf("Quadrado do número: %d\n", quadrado);
    printf("Decima parte do número: %.2f\n", decima_parte);

    return 0;

}