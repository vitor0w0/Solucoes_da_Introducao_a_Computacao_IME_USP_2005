#include <stdio.h>
#include "matriz.h"
//1 - Dada uma matriz real A com m linhas e n colunas e um vetor real V com n elementos, determinar o produto de A por V.
int main() {
    int m, n;
    scanf("%d %d", &m, &n);
    float mx[m][n];
    mrin(m, n, mx);
    float V[n];
    printf("Digite V: ");
    for (int i = 0; i < n; ++i) {
        scanf("%f", &V[i]);
    }
    float final[m];
    for (int i = 0; i < m; ++i) {
        final[i] = 0;
    }
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            final[i] += mx[i][j] * V[j];
        }
    }
    for (int i = 0; i < m; ++i) {
        printf("%.1f ", final[i]);
    }
    return 0;
}