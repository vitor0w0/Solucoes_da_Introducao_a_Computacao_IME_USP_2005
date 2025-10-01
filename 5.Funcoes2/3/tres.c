#include <stdbool.h>
#include <stdio.h>
/**
3.  (a) Escreva uma função de cabeçalho int divide (int *m, int *n, int d) que recebe três inteiros positivos como parâmetros
    e devolve 1 se d divide pelo menos um entre *m e *n, 0 caso contrário. Fora isso, se d divide *m, divide *m por d, e o mesmo para o *n.

    (b) Escreva um programa que lê dois inteiros positivos m e n e calcula, usando a função acima, o mínimo múltiplo comum entre m e n,
    ou seja, mmc(m,n).
 */
int mmc(int, int);
int divide(int*, int*, int);
int main() {
    int m, n, mult = 1;
    scanf("%d %d", &m, &n);

    for (int i = 2; m > 1 || n > 1; i++) {
        while (divide(&m, &n, i)) {
            mult *= i;
        }
    }
    printf("mmc de %d e %d = %d", m, n, mult);
    return 0;
}
int divide(int *m, int *n, const int d) {
    bool div = false;
    if (*m % d == 0) {
        *m = *m/d;
        div = true;
    }
    if (*n % d == 0) {
        *n = *n/d;
        div = true;
    }
    return div;
}