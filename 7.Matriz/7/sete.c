#include <stdio.h>
#include "matriz.h"
/**
 *  Dizemos que uma matriz quadrada inteira é um quadrado mágico se a soma dos elementos de cada linha,
 *  a soma dos elementos de cada coluna e a soma dos elementos das diagonais principal e secundária são todas iguais.
    Exemplo: A matriz
    8   0   7
    4   5   6
    3   10  2
    é um quadrado mágico.
*/
int main() {
    int n;
    scanf("%d", &n);
    int A[n][n], magico = 0, soma = 0;
    min(n, n, A);
    for (int i = 0; i < n; ++i) {
        soma += A[i][i];
    }
    int lat_sec = 0;
    for (int i = 0, j = n-1; i < n; i++, j--) {
        lat_sec += A[i][j];
    }
    if (lat_sec != soma) {
        printf("Nao e quadrado magico\n");
        return 0;
    }

    for (int i = 0; i < n; i++) {
        int soma1 = 0, soma2 = 0;
        for (int j = 0; j < n; j++) {
            soma1 += A[i][j];
            soma2 += A[j][i];
        }
        if (soma1 != soma || soma2 != soma) {
            printf("Nao e quadrado magico\n");
            return 0;
        }
    }

    printf("E quadrado magico\n");
    return 0;
}