#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main () {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int valor_inteiro = 6;
    float valor_float = 5.9;

    printf("Valor inteiro: %d\n", valor_inteiro);
    printf("Valor em float: %f\n", valor_float);

    system("PAUSE");
    return 0;
}
