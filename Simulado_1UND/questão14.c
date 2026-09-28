#include <stdio.h>

#define SENHA_CORRETA 2026
#define MAX_TENTATIVAS 3

int main() {
    int senha, tentativas = 0;

    while (tentativas < MAX_TENTATIVAS) {
        printf("Digite a senha (tentativa %d de %d): ", tentativas + 1, MAX_TENTATIVAS);
        scanf("%d", &senha);

        if (senha == SENHA_CORRETA) {
            printf("Acesso Concedido!\n");
            return 0;
        }

        tentativas++;
        if (tentativas < MAX_TENTATIVAS) {
            printf("Senha incorreta!\n");
        }
    }

    printf("Conta Bloqueada por Seguranca!\n");

    return 0;
}