#include <stdbool.h>
#include <stdio.h>

#include "../matriz.h"
/**
5.  Dizemos que uma matriz inteira Anxn  é uma matriz de permutação se em cada linha e em cada coluna houver n-1 elementos nulos e um único elemento igual a 1.

Exemplo:
A matriz abaixo é de permutação:
    0   1   0   0
    0   0   1   0
    1   0   0   0
    0   0   0   1
Observe que
    2   -1  0
    -1  2   0
    0   0   1
não é de permutação.
Dada uma matriz inteira Anxn, verificar se A é de permutação
*/
int main() {
    int m, n;
    scanf("%d %d", &m, &n);
    int A[m][n];
    min(m, n, A);
    for (int i = 0; i < m; i++) {
        int um = 0;
        for (int j = 0; j < n; j++) {
            if (A[i][j] == 1)
                um++;
            else if (A[i][j] != 0) {
                printf("Nao e permutacao\n");
                return 0;
            }
        }
        if (um != 1) {
            printf("Nao e permutacao\n");
            return 0;
        }
    }
    printf("E permutacao\n");
    return 0;
}