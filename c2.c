#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main () {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int num1;
    int num2;

    num1 = 44;
    num2 = num1 + 20;

    printf("O valor da variável num1 é: %d\n", num1);
    printf("O valor da variável num2 é: %d\n", num2);
    
    system("PAUSE");
    return 0;

    }


