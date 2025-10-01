#include  <stdio.h>
/**
  22 - (POLI 89) Dados n e uma seqüência de n números inteiros, determinar o comprimento de um segmento crescente de comprimento máximo.
  Exemplos:
  Na seqüência   5,  10,  3,  2,  4,  7,  9,  8,  5   o comprimento do segmento crescente máximo é 4.
  Na seqüência   10,  8,  7,  5,  2   o comprimento de um segmento crescente máximo é 1.
*/
int main() { //
    int n;
    printf("Digite n: ");
    scanf("%d", &n);

    int ant, prox, cont=1, max = 0;
    scanf("%d", &ant);

    while (n-- > 1) {
        scanf("%d", &prox);
        if (prox > ant) {
            cont++;
            cont > max? max = cont : 0;
        } else {
            cont=1;
        }
        ant = prox;
    }
    printf("o comprimento do segmento crescente maximo e %d", max);
    return 0;
}
