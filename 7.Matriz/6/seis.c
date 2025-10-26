#include <stdio.h>

#include "matriz.h"

/**
*  Dada uma matriz  Amxn, imprimir o número de linhas e o número de colunas nulas da matriz.
    Exemplo: m = 4 e n = 4

    1   0   2   3
    4   0   5   6
    0   0   0   0
    0   0   0   0

    tem 2 linhas nulas e 1 coluna nula.
 */
int main() {
    int m, n;
    scanf("%d %d", &m, &n);
    int A[m][n];
    min(m, n, A);
    int mnulo = 0;
    for (int i = 0; i < m; ++i) {
        int cont = 0;
        for (int j = 0; j < n; j++) {
            if (A[i][j] == 0)
                cont++;
        }
        if(cont == m)
            mnulo++;
    }
    int nnulo = 0;
    for (int i = 0; i < n; ++i) {
        int cont = 0;
        for (int j = 0; j < m; j++) {
            if (A[j][i] == 0)
                cont++;
        }
        if(cont == n)
            nnulo++;
    }
    printf("Linha nula %d\n", mnulo);
    printf("Coluna nula %d\n", nnulo);
    return 0;
}