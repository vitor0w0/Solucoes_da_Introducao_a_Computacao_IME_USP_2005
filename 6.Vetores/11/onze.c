#include "poli.h"
#include <stdio.h>
/**
 *  11 - Dado o polinômio p(x)=a0+a1x+...+an*x^n, isto é, os valores de n e de a0, a1, ..., an,
    determine os coeficientes reais da primeira derivada de p(x).
    formula = an * n * x^n-1
 */
int main(void) {
    int n;
    scanf("%d", &n);
    double vet[n+1];

    montar(vet, n);
    printf("Polinomio: ");
    exibir(vet, n);

    printf("Derivada: ");
    switch (n){
    case 0:
        printf("0(nula)\n");
        break;
    case 1:
        printf("%.0f\n", vet[1]);
        break;
    default:
        derivada(vet, n, vet);
        exibir(vet, n-1);
        break;
    }
    return 0;
}