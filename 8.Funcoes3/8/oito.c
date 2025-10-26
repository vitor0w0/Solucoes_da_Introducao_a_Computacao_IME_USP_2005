#include <stdio.h>
#include "matriz.h"
/**
8.  (a) Escreva uma função que recebe uma matriz real Amxn  e determina a sua transposta (Se B é a matriz transposta de A então aij = bji).
    (b) Escreva uma função que calcula o produto escalar de dois vetores dados.
    (c) Dada uma matriz real Xmxn, usando as funções acimas, calcule o produto X x X^t
    (d) Faça uma função que verifica se uma matriz Amxm  é a matriz identidade.
    (e) Ache uma aplicação para esse exercício.
 */
void transpor(int m, int n, float[m][n], float[n][m]);
float prodEscalar(float*, float*, int);
int main(){
    int m, n;
    printf("Digite m e n: ");
    scanf("%d %d", &m, &n);
    float X[m][n];
    mrin(m, n, X);

    float Xt[n][m];
    transpor(m, n, X, Xt);

    float prod[m][m];

    for (int i = 0; i < m; i++){
        prodEscalar(X[i], Xt[i], i);
    }
    

    mrout(m, m, prod);
    return 0;
}


void transpor(int m, int n, float src[m][n], float dst[n][m]){
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            dst[i][j] = src[j][i];
        }
    }
    
}
float prodEscalar(float *v1, float *v2, int n){
    float soma = 0;
    for (int i = 0; i < n; i++){
        soma += v1[i] * v2[i];
    }
    return soma;
}