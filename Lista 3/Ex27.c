#include <stdio.h>

int main() {
    int valor, resto, parte_pequena;
    int n100 = 0, n50 = 0, n20 = 0, n10 = 0, n5 = 0, n2 = 0;

    printf("Digite o valor do saque (R$, inteiro positivo): ");
    scanf("%d", &valor);

    if (valor <= 0) {
        printf("Valor invalido!\n");
        return 1;
    }


    parte_pequena = valor % 10;
    if (parte_pequena == 1 || parte_pequena == 3) {
        parte_pequena += 10;
    }

    if (parte_pequena > valor) {
        printf("Nao e possivel compor R$ %d com as cedulas disponiveis.\n", valor);
        return 0;
    }

   
    resto = valor - parte_pequena;
    while (resto >= 100) { resto -= 100; n100++; }
    while (resto >= 50)  { resto -= 50;  n50++;  }
    while (resto >= 20)  { resto -= 20;  n20++;  }
    while (resto >= 10)  { resto -= 10;  n10++;  }

    
    resto = parte_pequena;
    if (resto % 2 == 1) { resto -= 5; n5++; }
    while (resto >= 2)  { resto -= 2; n2++; }

    printf("\nSaque de R$ %d:\n", valor);
    if (n100) printf("%d cedula(s) de R$ 100\n", n100);
    if (n50)  printf("%d cedula(s) de R$ 50\n", n50);
    if (n20)  printf("%d cedula(s) de R$ 20\n", n20);
    if (n10)  printf("%d cedula(s) de R$ 10\n", n10);
    if (n5)   printf("%d cedula(s) de R$ 5\n", n5);
    if (n2)   printf("%d cedula(s) de R$ 2\n", n2);
    printf("Total de cedulas: %d\n", n100 + n50 + n20 + n10 + n5 + n2);

    return 0;
}