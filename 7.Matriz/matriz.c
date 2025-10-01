#include "matriz.h"
#include <stdio.h>

void min(int m, int n, int matriz[m][n]) {
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }
}
void mout(int m, int n, int matriz[m][n]) {
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; j++) {
            printf("%d ", matriz[i][j]);
        }
        putchar('\n');
    }
}
void mrin(int m, int n, float matriz[m][n]) {
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; j++) {
            scanf("%f", &matriz[i][j]);
        }
    }
}
void mrout(int m, int n, float matriz[m][n]) {
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; j++) {
            printf("%.1f ", matriz[i][j]);
        }
        putchar('\n');
    }
}


void vrin(int n, float v[n]) {
    for (int i = 0; i < n; ++i) {
        scanf("%f", &v[i]);
    }
}
void vrout(int n, float v[n]) {
    for (int i = 0; i < n; ++i) {
        printf("%.1f ", v[i]);
    }
}
void vin(int n, int v[n]) {
    for (int i = 0; i < n; ++i) {
        scanf("%d", &v[i]);
    }
}
void vout(int n, int v[n]) {
    for (int i = 0; i < n; ++i) {
        printf("%d ", v[i]);
    }
}