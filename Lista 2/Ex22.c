#include <stdio.h>

int main(void) {
    char letraMaiuscula, letraMinuscula;

    printf("Digite uma letra maiuscula: ");
    scanf(" %c", &letraMaiuscula);

  
    letraMinuscula = letraMaiuscula + 32;

    printf("Letra maiuscula: %c (ASCII %d)\n", letraMaiuscula, letraMaiuscula);
    printf("Letra minuscula: %c (ASCII %d)\n", letraMinuscula, letraMinuscula);

    return 0;
}