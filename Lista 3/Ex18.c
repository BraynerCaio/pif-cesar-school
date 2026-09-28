#include <stdio.h>

int main() {
    long long numero, original, invertido = 0;

    printf("Digite um inteiro positivo: ");
    scanf("%lld", &numero);

    if (numero <= 0) {
        printf("O numero deve ser maior que zero.\n");
        return 1;
    }

    original = numero;
    while (numero > 0) {
        invertido = invertido * 10 + numero % 10;  
        numero /= 10;                              
    }

    printf("Numero original: %lld\n", original);
    printf("Numero invertido: %lld\n", invertido);

    return 0;
}