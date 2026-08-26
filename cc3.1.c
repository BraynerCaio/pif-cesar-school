#include <stdio.h>
#include <stdlib.h>
#include <windows.h> 

int main(){

    int a = 17, b = 5;
    int soma = a + b;
    int subtracao = a - b;
    int multiplicacao = a * b;
    int divisao = a / b;
    int resto = a % b;
    
    printf("Valor da soma: %d\n", soma);
    printf("Valor da subtração: %d\n", subtracao);
    printf("Valor da multiplicação: %d\n", multiplicacao);
    printf("Valor divisão: %d\n", divisao);
    printf("Valor do resto: %d\n", resto);

    system("PAUSE");
    return 0;
}
