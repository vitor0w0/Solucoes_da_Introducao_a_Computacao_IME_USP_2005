#include <stdio.h>
#include "matriz.h"
/*
    9 - (a) Dado um vetor real X com n elementos e um certo índice k, escreva uma função que determina o índice do elemento mínimo entre X[k], X[k+1], ..., X[n-1].
    (b) Usando a função do item anterior coloque os elementos de um vetor em ordem crescente.
*/
int minimo(float*, int, int);
void swap(float*, float*);
int main(){
    int n;
    printf("Digite n: ");
    scanf("%d", &n);
    float X[n];
    printf("Digite vetor: ");
    vrin(X, n);
    printf("Vetor: ");
    vrout(X, n);
    for (int i = 0; i < n; i++){
        swap(&X[i], &X[minimo(X, i, n)]);
    }
    printf("Vetor ordernado: ");
    vrout(X, n);
    return 0;
}
void swap(float *a, float *b){
    float temp = *a;
    *a = *b;
    *b = temp;
}
int minimo(float *X, int k, int n){
    int min = k;
    for (int i = k; i < n; i++){
        if(X[i] < X[min])
            min = i;
    }
    return min;
}