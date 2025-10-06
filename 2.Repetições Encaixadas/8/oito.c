#include <stdbool.h>
#include <stdio.h>
/**
*   8 - (POLI 97) Dizemos que uma seqüência de inteiros positivos é k-alternante se for composta alternadamente por
*   segmentos de números pares de tamanho k e segmentos de números ímpares de tamanho k.
    Exemplos:
    A seqüência  13 1 3 6 8 9 11 2 4 1 7 6 8 é 2-alternante. 12 num
    A seqüência  7 2 1 4 7 8 9 12 é 1-alternante. 7 num
    A seqüência  9 4 2 3 1 6 4 2 9 3 não é alternante. 9 num
    A seqüência  3 1 3 5 é 3-alternante. 3 num
    Dado n >= 1 e uma seqüência com n inteiros, verificar se existe um inteiro k >= 1 tal que a seqüência é k-alternante.
    Dê como saída também o valor de k caso a seqüência seja alternante.
 */
int main() {
    int n, comp;
    scanf("%d %d", &n, &comp); n--;
    if (n==0) {
        printf("1-alternante\n");
        return 0;
    }
    int k = 1, dps;
    comp = comp%2;
    while (n-- > 0) {
        scanf("%d", &dps);
        if (dps%2 != comp)
            break;
        k++;
    }
    if (n==-1) {
        printf("A sequencia e %d-alternante\n", k);
        return 0;
    }
    if (dps%2 != !comp) {
        puts("Nao e k-alternante");
        return 0;
    }

    int contk = k-1;
    comp = (comp==1)? 0 : 1;
    while (n-- > 0) {
        scanf("%d", &dps);
        if (contk == 0) {
            contk = k;
            comp = (comp==1)? 0 : 1;
        }
        if (dps%2 == comp)
            contk--;
        else {
            puts("Nao e k-alternante");
            return 0;
        }
    }
    printf("A sequencia e %d-alternante\n", k);
    return 0;
}