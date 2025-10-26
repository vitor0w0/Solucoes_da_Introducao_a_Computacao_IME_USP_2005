#include <stdio.h>
/**
    14 - (POLI 82) Chama-se seqüência de Farey relativa a n, a seqüência das frações racionais irredutíveis,
    dispostas em ordem crescente, com denominadores positivos e não maiores que n.
    Exemplo:  Se n=5, os termos  da seqüência de Farey, tais que 0 <= a <= 1 são:
    0/1, 1/5, 1/4, 1/3, 2/5, 1/2, 3/5, 2/3, 3/4, 4/5, 1/1

    Para gerarmos os termos a de uma seqüência de Farey tais que 0 <= a <= 1, podemos usar o seguinte processo. Começamos com as frações:
    0/1 e 1/1
    e entre cada duas frações consecutivas:
    i/j e k/m
    introduzimos a fração:
    i+k/j+m

    e assim sucessivamente enquanto j + m <= n. Quando não for mais possível introduzir novas frações teremos gerado todos os termos da seqüência
    de Farey relativa a n, tais que 0 <= a <= 1.
    Usando o processo descrito, determine os termos a, 0 <= a <= 1, da seqüência de Farey relativa a n, n inteiro positivo.

    Sugestão: Gere os numeradores e os denominadores em dois vetores.

*/
int main() {
    //TODO
    return 0;
}