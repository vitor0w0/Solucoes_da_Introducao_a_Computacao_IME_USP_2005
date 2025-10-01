#include <stdbool.h>
#include <stdio.h>
#include <time.h>
/**
 *  F1 = 2
 *  F2 = 1
 *  Fi = 2*Fi-1 + Gi-2  i >= 3
 *
 *  G1 = 1
 *  G2 = 2
 *  Gi = Gi-1 + 3*Fi-2  i >= 3
 *
 *  (a) Só para ver se você entendeu as fórmulas, qual é o valor de F6 e G6? R: 59 e 44
*
    (b) Faça uma função de nome valor que recebe um inteiro k >1 e devolve Fk e Gk.
    Exemplo: Para k=2, a função deve devolver os valores 1 e 2. Para k=3, a função deve devolver os valores 3 e 8.
    Para k=4, a função deve devolver os valores 8 e 11.

    (c) Faça um programa que lê um inteiro n > 2 e imprime os valores Fn-2 + Gn+200 e Fn+200 - Gn-2
 */
void valor(long long, long long*, long long*);
int main() {
    int n;
    scanf("%d", &n);
    long long f2, g2, f200, g200;
    valor(n-2, &f2, &g2);
    valor(n+200, &f200, &g200);
    printf("Fn-2 + Gn+200 = %lld\n", f2 + g200);
    printf("Fn+200 - Gn-2 = %lld\n", f200 - g2);
    return 0;
}

void valor(const long long k, long long *fp, long long *gp) {
    if (k == 1l) {
        *fp = 2l;
        *gp = 1l;
        return;
    }
    if (k == 2l) {
        *fp = 1l;
        *gp = 2l;
        return;
    }

    long long f1 = 2l, f2 = 1l, g1 = 1l, g2 = 2l, f3, g3;
    for (int i = 3; i <= k; i++) {
        f3 = f2 * 2l + g1;
        g3 = g2 + 3l * f1;

        f1 = f2;
        f2 = f3;

        g1 = g2;
        g2 = g3;
    }
    *fp = f3;
    *gp = g3;
}
