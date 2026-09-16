#include <stdio.h>


int main(){
    int numero_inteiro;
    printf("Escreva um numero inteiro(0-255 para ASCII valido: ");
    scanf("%d", &numero_inteiro);

    printf("Decimal: %d | Hexadecimal: %x | Octal: %o | ASCII: %c\n", numero_inteiro, numero_inteiro, numero_inteiro, numero_inteiro);

    return 0;
}


