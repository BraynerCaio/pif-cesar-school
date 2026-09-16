//a) Não é portável. Igual aconteceu com Vini na aula, não existe implementação de <conio.h> nos compiladores padrão de Linux ou no macOS.
//b) 
//c) 
#include <stdio.h>

int main() {
    int c;

    printf("Digite um caractere e pressione ENTER: ");
    c = getchar();  

    printf("Voce digitou: %c (codigo ASCII: %d)\n", c, c);

    return 0;
}