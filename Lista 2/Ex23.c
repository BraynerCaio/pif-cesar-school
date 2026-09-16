#include <stdio.h>


int main(void) {
    int horaInicio, minutoInicio, segundoInicio;
    long duracaoSegundos;
    long totalSegundos;
    int horaFinal, minutoFinal, segundoFinal;

    printf("Digite a hora de inicio (0-23): ");
    scanf("%d", &horaInicio);
    printf("Digite o minuto de inicio (0-59): ");
    scanf("%d", &minutoInicio);
    printf("Digite o segundo de inicio (0-59): ");
    scanf("%d", &segundoInicio);

    printf("Digite a duracao do experimento (em segundos): ");
    scanf("%ld", &duracaoSegundos);

    totalSegundos = (long) horaInicio * 3600 + (long) minutoInicio * 60 + segundoInicio;
    totalSegundos += duracaoSegundos;
    totalSegundos = totalSegundos % 86400;
    horaFinal = (int) (totalSegundos / 3600);
    minutoFinal = (int) ((totalSegundos % 3600) / 60);
    segundoFinal = (int) (totalSegundos % 60);

    printf("Horario de termino do experimento: %02d:%02d:%02d\n",
           horaFinal, minutoFinal, segundoFinal);

    return 0;
}