#include <stdio.h>
#include <stdlib.h>

int main(){

    int totalSegundos, horas, minutos, segundosRestantes;
    printf("Digite um intervalo de tempo em segundos: ");
    scanf("%d", &totalSegundos);

    horas = totalSegundos / 3600;
    minutos = (totalSegundos % 3600) / 60;
    segundosRestantes = totalSegundos % 60;

    printf("%d segundos correspondem a %d hora(s), %d minuto(s) e %d segundo(s).\n",
           totalSegundos, horas, minutos, segundosRestantes);

    system("PAUSE");
    return 0;
}
