#include <stdio.h>

int main() {
    int a, b, i;

    printf("Digite os inteiros A e B: ");
    scanf("%d %d", &a, &b);

    if (a <= b) {
        printf("Ordem crescente:\n");
        for (i = a; i <= b; i++) {
            printf("%d ", i);
        }
    } else {
        printf("Ordem decrescente:\n");
        for (i = a; i >= b; i--) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}