/* Questao 24 - Tabela de notas escolares alinhada */
#include <stdio.h>
#include <stdlib.h>

int main(){
    
    printf("%-10s%s\n", "Aluno(a)", "NOTA");
    printf("%-10s%s\n", "=========", "=====");
    printf("%-10s%.1f\n", "Ricardo", 9.0);
    printf("%-10s%s\n",  "Julio", "DEZ");
    printf("%-10s%.1f\n", "Guilherme", 4.5);
    printf("%-10s%.1f\n", "Caio", 7.0);

    system("PAUSE");
    return 0;
}