#include <stdio.h>

int main() {
    int codigo;

    printf("Decimal   Hexadecimal   Caractere\n");
    

    for (codigo = 32; codigo <= 126; codigo++) {
        printf("%5d     0x%02X          %c\n", codigo, codigo, codigo);
    }

    return 0;
}