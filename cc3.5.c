#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    float tempC, tempF;

    printf("Digite a temperatura em Fahrenheit: ");
    scanf("%f", &tempF);

    tempC = ((tempF - 32) * 5/9);

    printf("A temperatura em Celsius é: %.2fCº\n", tempC);
    system("PAUSE");
    return 0;
}