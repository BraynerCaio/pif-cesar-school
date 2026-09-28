#include <stdio.h>

int main() {
    int i;

    /* Versao 1: for */
    printf("Versao com for:\n");
    for (i = 0; i <= 100; i++) {
        printf("%d ", i);
    }

    /* Versao 2: while */
    printf("\n\nVersao com while:\n");
    i = 0;
    while (i <= 100) {
        printf("%d ", i);
        i++;
    }

    /* Versao 3: do-while */
    printf("\n\nVersao com do-while:\n");
    i = 0;
    do {
        printf("%d ", i);
        i++;
    } while (i <= 100);

    printf("\n");
    return 0;
}


//Resposta: a estrutura mais adequada para este caso e o for.
//O numero de repeticoes e conhecido de antemao (de 0 a 100), e o for
//concentra inicializacao, teste e incremento em uma unica linha, o que
//deixa o codigo mais compacto, legivel e com menos risco de esquecer o
//incremento (e cair em laco infinito). O while e o do-while funcionam,
//mas espalham o controle do contador em varias linhas.
 