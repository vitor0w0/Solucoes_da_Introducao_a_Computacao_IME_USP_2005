#include <stdio.h>
#include <string.h>
#include "../matriz.h"
//4 - Dada uma matriz real Amxn, verificar se existem elementos repetidos em A.
int search(float *arr, int n, float target);
int main() {
    int m, n;
    scanf("%d %d", &m, &n);
    float A[m][n];
    mrin(m, n, A);
    float v[m*n];
    memset(v, 0, sizeof(float)*m*n);
    int k = 0;
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            if (!search(v, k, A[i][j]))
                v[k++] = A[i][j];
            else {
                printf("Repetido\n");
                return 0;
            }
        }
    }
    printf("Nao tem repetido\n");
    return 0;
}

int search(float *arr, int n, float target) {
    for (int i = 0; i < n; ++i) {
        if (arr[i] == target) {
            return 1;
        }
    }
    return 0;
}