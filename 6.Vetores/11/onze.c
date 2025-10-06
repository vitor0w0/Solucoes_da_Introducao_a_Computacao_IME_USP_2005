#include "poli.h"
#include <stdio.h>
/**
 *  11 - Dado o polinômio p(x)=a0+a1x+...+an*x^n, isto é, os valores de n e de a0, a1, ..., an,
    determine os coeficientes reais da primeira derivada de p(x).
    formula = an * n * x^n-1
 */
void derivada(double *vet, int grau);
int main(void) {
    int n;
    scanf("%d", &n);
    double vet[n+1];

    montar(vet, n);
    exibir(vet, n);

    printf("Derivada: ");
    if(n == 0)
        printf("%.0lf\n", vet[0]);
    else
        derivada(vet, n--);

    exibir(vet, n);
    return 0;
}
void derivada(double *vet, int grau){
    int tam = grau-1, copia_grau = grau;
    for (int i = 0; i < tam; i++){
        vet[i] = copia_grau*vet[i];
        copia_grau--;
    }
}