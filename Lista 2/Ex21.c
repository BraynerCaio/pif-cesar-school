#include <stdio.h>

int main(void) {
    char caractere;

    printf("Digite um caractere: ");
    scanf(" %c", &caractere);

    printf("O caractere '%c' possui o codigo ASCII: %d\n", caractere, caractere);

    return 0;
}