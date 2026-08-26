#include <stdio.h>
#include <stdlib.h>

int main(){

printf("\n\tBom dia! Shirley."); //fica uma linha em branco e a mensagem logo abaixo.
printf("Voce ja tomou cafe? \n"); //Se conectou com a frase acima.
printf("\n\nA solucao nao existe!\nNao insista."); //A segunda frase separou pulando uma linha.
printf("Duas\tlinhas\tde\tsaida\nou\tuma?"); //Se conectou com a frase acima e o final se separou para uma linha abaixo.
printf("%s\n%s\n%s\n", "um", "dois", "tres"); //cada palavra em uma linha separada.

system("PAUSE");
return 0;
}