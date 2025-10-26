#include <stdio.h>
#include <math.h>
#include "matriz.h"
/**
    7 -(a) Escreva uma função que recebe como parâmetros um vetor real A com n elementos e um vetor real B com m elementos,
    ambos representando conjuntos, e verifica se A está contido em B (A c B).
    (b) Usando a função do item acima verifique se dois conjuntos são iguais (A = B se e somente se  A c B e B c A ).
 */
int estaContido(float*, int, float*, int);
int main(){
    int m, n;
    printf("Digite n: ");
    scanf("%d", &n);
    float a[n];
    printf("Digite o vetor: ");
    vrin(a, n);

    printf("Digite m: ");
    scanf("%d", &m);
    float b[m];
    printf("Digite o vetor: ");
    vrin(b, m);
    if(estaContido(a, n, b, m) && estaContido(b, m, a, n)){
        printf("Os dois conjuntos sao inguais\n");
    } else{
        printf("Os dois conjuntos sao diferentes\n");
    }
    return 0;
}
int estaContido(float *a, int n, float *b, int m){
    float copia_b[m];
    for (int i = 0; i < m; i++){
        copia_b[i] = b[i];
    }

    int contido = 0;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            if(a[i] == copia_b[j]){
                contido++;
                copia_b[j] = NAN;
                break;
            }
        }
    }
    return (contido == n);
}