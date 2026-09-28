Questão 1) Alternativa correta: c)

Questão 2) Na segunda linha não pode ter o ";". Na terceira linha o "Main" está com "M" Maiúsculo. Na sexta linha falta Aspas duplas dentro do (printf)

Questão 3) Valores finais: a = 73, b = 62, c = 10, d = 10.

Questão 4) a)1 b)1 c)1 d)1 e)1 

Questão 5) 
a) A diferença: o "while" e o "for" testam a condição antes de executar o bloco, então podem executar zero vezes. O "do-while" executa o bloco e testa depois, portanto executa no mínimo uma vez.
b) Cenário típico do "do-while": validação de entrada e menus. O programa precisa pedir o dado ao menos uma vez antes de saber se ele é válido (ex.: pedir uma nota até o usuário digitar um valor entre 0 e 10). Com "do-while" o código não precisa duplicar a leitura antes do laço.
c) "while (condicao);" não é erro de compilação. O ";" é interpretado como um comando vazio, que passa a ser o corpo do laço.

Questão 6) 
a)Porque a variável "soma" foi declarada dentro do bloco do "for" , então só existe ali. O "printf" final está fora do bloco, onde "soma" não é visível.
b)Valores somados: 1, 2, 3, 4, 6 e 7.
c) Correção: declarar e inicializar "soma" antes do laço.

#include <stdio.h>
#include <stdlib.h>

int main() {
    int i;
    int soma = 0;
    for (i = 1; i <= 10; i++) {
        if (i == 5) continue;
        if (i == 8) break;
        soma += i * i;
    }
    printf("Soma final = %d\n", soma);
    system("PAUSE");
    return 0;
}


Saída: 1 + 4 + 9 + 16 + 36 + 49 = Soma final = 115