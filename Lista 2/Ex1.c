#include <stdio.h>


int main(){
    float valor_inteiro;
    valor_inteiro = 2.97;
    printf("O valor armazenado eh: %.f\n", valor_inteiro);
    system("PAUSE");
    return 0;
}
//a) 2
//b) Por que a atribuição que foi colocada foi o "int", pegando apenas a parte inteira do número.
//c) Para manter a precisão o dev deveria colocar "float" no lugar de "int". Para arredondar basta colocar um "%.f" no print(após a alteração para tipo "float").
