#include <stdio.h>
#include "matriz.h"
/**
    4 - (a) Escreva uma função que troca o conteúdo de duas variáveis.
    (b) Escreva uma função que recebe dois inteiros, i e j, uma matriz real Amxn e troca linha i pela linha j. Utilize a função do item anterior.
 */
void swap(float *a, float *b);
void trocaln(int m, int n, float matriz[m][n]);
int main(){
    int m, n;
    printf("Digite m e n:");
    scanf("%d %d", &m, &n);
    float matriz[m][n];

    mrin(m, n, matriz);
    printf("Primeira matriz:\n");
    mrout(m, n, matriz);
    
    trocaln(m, n, matriz);
    printf("Depois de trocar a linha: ");
    mrout(m, n, matriz);
    return 0;
}
void swap(float *a, float *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
void trocaln(int m, int n, float matriz[m][n]){
    int i, j;
    printf("Digite i e j: ");
    scanf("%d %d", &i, &j); 
    i++; j++;
    for (int k = 0; k < n; k++)
        swap(&matriz[i][k], &matriz[j][k]);
}