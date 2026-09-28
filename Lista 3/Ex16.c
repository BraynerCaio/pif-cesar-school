#include <stdio.h>

#define SENHA_CORRETA 2026
#define MAX_TENTATIVAS 3

int main() {
    int senha, tentativas = 0;

    while (tentativas < MAX_TENTATIVAS) {
        printf("Digite a senha: ");
        scanf("%d", &senha);
        tentativas++;

        if (senha == SENHA_CORRETA) {
            printf("Acesso Concedido! Tentativas utilizadas: %d\n", tentativas);
            return 0;
        }

        if (tentativas < MAX_TENTATIVAS) {
            printf("Senha incorreta! Restam %d tentativa(s).\n", MAX_TENTATIVAS - tentativas);
        }
    }

    printf("Conta Bloqueada por Seguranca.\n");

    return 0;
}