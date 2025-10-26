#include <stdio.h>
#include "matriz.h"
/**
    3 - (a) Escreva uma função que calcula a soma dos elementos da linha i de uma matriz real Amxn.
    (b) Escreva uma função que calcula o produto dos elementos da coluna j de uma matriz real Amxn.
 */
float soma(int n, float matriz[][n]);
float prod(int n, float matriz[][n]);
int main(){
    int m, n;
    printf("Digite m e n:");
    scanf("%d %d", &m, &n);
    float matriz[m][n];

    mrin(m, n, matriz);
    printf("Matriz:\n");
    mrout(m, n, matriz);

    printf("Soma = %.2f\n", soma(n, matriz));
    printf("Produto = %.2f\n", prod(n, matriz));
    return 0;
}
float soma(int n, float matriz[][n]){
    int i;
    scanf("%d", &i);
    printf("Digite coluna: ");
    float soma = 0;
    for (int j = 0; j < n; j++){
        soma += matriz[i][j];
    }
    return soma;
}
float prod(int n, float matriz[][n]){
    int i;
    printf("Digite coluna: ");
    scanf("%d", &i);
    float prod = 1;
    for (int j = 0; j < n; j++){
        prod *= matriz[i][j];
    }
    return prod;
}