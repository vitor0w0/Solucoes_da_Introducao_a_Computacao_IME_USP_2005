#include <stdio.h>

#include "matriz.h"
//3.  Dadas duas matrizes reais  Amxn e Bnxp, calcular o produto de A por B.
int main() {
    int m, n, p;
    scanf("%d%d%d", &m,&n,&p);
    float A[m][n], B[n][p];
    mrin(m, n, A);
    mrin(n, p, B);

    printf("A:\n");
    mrout(m, n, A);

    printf("B:\n");
    mrout(n, p, B);

    float final[m][p];
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < p; j++) {
            final[i][j] = 0;
        }
    }

    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; j++) {
            for (int k = 0; k < p; ++k) {
                final[i][k] += A[i][j] * B[j][k];
            }
        }
    }
    printf("Resultado AxB:\n");
    mrout(m, p, final);
    return 0;
}