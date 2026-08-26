#include <stdio.h>
#include <stdlib.h> 

int main() {
    char nome_do_cliente[20];
    char tipo_de_cafe[20];
    float valor_do_cafe;
    int quantidade_de_cafe;
    int tempo = 4;

    printf("Digite seu Nome: ");
    scanf(" %19[^\n]", nome_do_cliente);
    printf("Como você quer seu café? ");
    scanf(" %19[^\n]", tipo_de_cafe);
    printf("Valor unitário do café: ");
    scanf("%f", &valor_do_cafe);
    printf("Quantidade de café: ");
    scanf("%d", &quantidade_de_cafe);

    printf("\n--- Pedido ---\n");
    printf("Cliente: %s\n", nome_do_cliente);
    printf("Tipo de café: %s\n", tipo_de_cafe);
    printf("Valor unitário: R$ %.2f\n", valor_do_cafe);
    printf("Quantidade: %d\n", quantidade_de_cafe);
    printf("Total: R$ %.2f\n", valor_do_cafe * quantidade_de_cafe);
    printf("Tempo de espera: %d minutos\n ", quantidade_de_cafe * tempo);

      printf("O(a) cliente %s pediu %d café(s) %s(s). O valor total foi de R$ %.2f. Seu tempo de espera é de %d minutos.\n",
        nome_do_cliente, quantidade_de_cafe, tipo_de_cafe,
        valor_do_cafe * quantidade_de_cafe, quantidade_de_cafe * tempo);

    return 0;
}