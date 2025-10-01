#include <stdio.h>
/**
 *  11 - Dado o polinômio p(x)=a0+a1x+...+an*x^n, isto é, os valores de n e de a0, a1, ..., an,
    determine os coeficientes reais da primeira derivada de p(x).
 */ //formula = an * n * x^n-1
double poli (double* vet, int grau, double x);
int main(void) {
    int n;
    double x;
    scanf("%d %lf", &n, &x);
    double vet[n+1];
    for (int i = 0; i <= n; i++) {
        scanf("%lf", &vet[i]);
    }
    printf("%.2lf\n", poli(vet, n, x));

    return 0;
}
double poli(double* vet, int grau, double x) {
    double pot = x;
    double soma = vet[grau];
    for (int i = grau-1; i >= 0; i--) {
        soma += vet[i]*pot;
        pot *= x;
    }
    return soma;
}