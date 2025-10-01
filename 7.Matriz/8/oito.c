#include <stdio.h>
#include <string.h>

#include "../matriz.h"
/**
*   8 - (a) (MAT 83) Imprimir as n primeiras linhas do triângulo de Pascal
    1
    1    1
    1    2    1
    1    3    3    1
    1    4    6    4    1
    1    5   10   10    5    1
    (b) Imprimir as n primeiras linhas do triângulo de Pascal usando apenas um vetor.
*/
void pascal(int);
void print(int n, int[n][n]);
int main() {
    int n;
    scanf("%d", &n);
    //Solução com matriz:
    // int pascal[n][n];
    // memset(pascal, 0, sizeof(int)*n*n);
    // for (int i = 0; i < n; ++i) {
    //     pascal[i][0] = 1;
    //     pascal[i][i] = 1;
    // }
    // for (int i = 0; i < n-1; ++i) {
    //     for (int j = 0; j < i; j++) {
    //         for (int k = j+1; k == j+1; ++k) {
    //             pascal[i+1][k] += pascal[i][j] + pascal[i][k];
    //         }
    //     }
    // }
    //print(n, pascal);

    //Solução com vetor:

    return 0;
}
void print(int n, int pascal[n][n]) {
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j <= i; j++) {
            printf("%d ", pascal[i][j]);
        }
        putchar('\n');
    }
}
void pascal(int n) {
    int v[n];
    memset(v, 0, n);
    int aux = 0;
    for (int i = 0; i < n; ++i) {
        v[0] = 1;
        for (int j = 0; j <= i; j++) {
        }
    }
}