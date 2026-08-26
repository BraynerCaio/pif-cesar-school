#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main () {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int idade;

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    printf("Você tem %d anos, e já viveu %d dias. \n", idade, idade*365);
    
    
    system("PAUSE");
    return 0;
}