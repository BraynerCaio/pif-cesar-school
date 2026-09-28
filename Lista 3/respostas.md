Questão 1) 
a) O "while" testa a condição antes de executar o bloco; se ela já for falsa na primeira avaliação, o bloco executa zero vezes. O "do-while" executa o bloco primeiro e testa a condição depois, portanto executa no mínimo uma vez.

b)- "for": quando o número de repetições é conhecido ou controlado por um contador. 
- "while": quando o número de repetições é desconhecido e o laço pode nem executar.
- "do-while": quando o corpo precisa executar ao menos uma vez. Ex.: menus e validação de entrada (pedir o dado antes de saber se ele é válido).

c) "while (condicao);" não é erro de compilação: o ";" é interpretado como um comando vazio, que vira o corpo do laço. É um erro de lógica. Se "condicao" for verdadeira, nada dentro do laço a altera, então o programa fica preso num laço infinito executando o comando vazio, e o bloco que vinha logo abaixo nunca é executado como corpo do laço. No "do-while", ao contrário, o ";" após "while (condicao)" é obrigatório.

Questão 2)
a)O compilador emite erro porque "soma" foi declarada dentro do bloco do "for". Uma variável de bloco só é visível naquele bloco; no "printf" final ela não existe.

b)Se o "printf" fosse movido para dentro do bloco, o programa compilaria, mas o valor estaria errado. A variável "soma" é criada e reinicializada com 0 a cada iteração. Assim, o "printf" mostraria apenas "i * i" daquela iteração (1, 4, 9, ...), e nunca o acumulado.

c)Correção: declarar e inicializar soma antes do laço, no escopo de main, onde ela é visível tanto dentro do for quanto no printf final e vive durante toda a função.
#include <stdio.h>
#include <stdlib.h>

int main() {
    int i;
    int soma = 0;              
    for (i = 1; i < 10; i++) {
        soma += i * i;          
    }
    printf("Soma final = %d\n", soma);
    system("PAUSE");
    return 0;
}


Questão 3)
a)  Trecho A: "for (a = 96; a > 0; a /= 2) printf("%d\t", a);"
Sequência impressa: 96, 48, 24, 12, 6, 3, 1. Depois de 1, "a /= 2" dá 0 e o teste "a > 0" falha.

b)Trecho B:" for (; (ch = getch()) != 'X'; ) printf("%c", ch + 1);" .A inicialização e o incremento foram omitidos; toda a lógica está no teste. A cada volta, "getch()" lê um caractere do teclado (sem eco na tela e sem esperar Enter) e o guarda em "ch". Se for diferente de "X", o corpo imprime o caractere seguinte na tabela ASCII ("ch + 1"; digitar "a" exibe "b"). Ao digitar "X", o laço termina.

c) Trecho C: "for (;;) printf("Laco infinito\n");" Sem condição de teste, ela é considerada sempre verdadeira. Para interromper por código, sem matar o processo pelo sistema operacional, usa-se uma condição interna com "break" (sai do laço), "return" (sai da função) ou "exit(0)" (encerra o programa de forma controlada):
int cont = 0;
for (;;) {
    printf("Laco infinito\n");
    if (++cont == 5) break;
}

Questão 4)
a)Ao executar "break" dentro de um "for" ou "while", o laço é encerrado imediatamente, sem reavaliar a condição, e a execução segue na primeira instrução após o laço.

b) Ao executar "continue" em um "for", o restante do corpo é pulado e o controle vai para a próxima iteração. A primeira expressão executada em seguida é a terceira, e depois é feita a segunda (teste da condição). A inicialização (primeira expressão) não é repetida. Em um "while", o "continue" vai direto para o teste.

c)Em laços aninhados, o "break" interrompe apenas o laço mais interno onde ele está. O laço externo continua normalmente na próxima iteração dele.

Questão 5) 
a)O laço executa 5 iterações: (0,10), (1,9), (2,8), (3,7) e (4,6). Depois disso "i = 5" e "j = 5", então "i < j" é falso.

b)i = 0, j = 10 | soma = 10
i = 1, j = 9 | soma = 10
i = 2, j = 8 | soma = 10
i = 3, j = 7 | soma = 10
i = 4, j = 6 | soma = 10

c) int i = 0, j = 10;
while (i < j) {
    printf("i = %d, j = %d | soma = %d\n", i, j, i + j);
    i++;
    j--;
}

Questão 6)
a)"Valor final de x = 6"

b)Com "x++" pós-fixado, a comparação usa o valor antigo de "x" e só depois "x" é incrementado

c)
int x = 0;
while (x < 5) {
    x++;
}
x++;   
printf("Valor final de x = %d\n", x);   
