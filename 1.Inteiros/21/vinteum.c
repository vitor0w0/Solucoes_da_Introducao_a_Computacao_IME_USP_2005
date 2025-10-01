#include <stdio.h>
/**
*  (POLI 87) Dados n e uma seqüência de n números inteiros, determinar quantos segmentos de números iguais consecutivos compõem essa seqüência.
    Exemplo: A seguinte seqüência é formada por 5 segmentos de números iguais: 5,  2,  2,  3,  4,  4,  4,  4,  1,  1
 */
int main() {
    int n;
    printf("Digite o tamanho da sequencia:");
    scanf("%d", &n);

    int atual, cont = 1, proximo;
    scanf("%d", &atual);

    while (n > 1) {
        scanf("%d", &proximo);
        if (atual!=proximo) cont++;
        atual = proximo;
        n--;
    }
    printf("%d segmentos iguais", cont);
    return 0;
}