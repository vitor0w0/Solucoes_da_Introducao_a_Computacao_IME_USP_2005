#include <stdio.h>
/**
    2 - (a) Escreva uma função que lê, linha a linha, uma matriz real Amxn
    (b) Escreva uma função que imprime uma matriz real Amxn
 */
void scan(int m, int n, float matriz[m][n]);
void print(int m, int n, float matriz[m][n]);
int main(){
    int m, n;
    printf("Digite m e n:");
    scanf("%d %d", &m, &n);
    float matriz[m][n];
    scan(m, n, matriz);
    printf("\nMatriz digitada:\n");
    print(m, n, matriz);
    return 0;
}
void scan(int m, int n, float matriz[m][n]){
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            printf("[%d][%d] = ", i, j);
            scanf("%f", &matriz[i][j]);
        }
    }
}
void print(int m, int n, float matriz[m][n]){
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            printf("%.0f ", matriz[i][j]);
        }
        putchar('\n');
    }
}