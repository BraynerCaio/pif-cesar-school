#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main () {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int numeroDado = rand() * rand()  % 6 + 1;

    printf("Número sorteado: %d\n", numeroDado);
    system("PAUSE");
    return 0;
}