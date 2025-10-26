#include "poli.h"
#include <stdio.h>
int main(void) {
    int n;
    printf("Grau: ");
    scanf("%d", &n);
    double vet[n+1];
    printf("Polinomio: ");
    montar(vet, n);
    exibir(vet, n);
    printf("Quantos pontos k: ");
    int k;
    scanf("%d", &k);
    double pontos[k];
    for (int i = 0; i < k; i++)
        scanf("%lf", &pontos[i]);

    for (int i = 0; i < k; i++)
        printf("Se x = %.4lf: %.4lf\n", pontos[i], calcular(vet, n, pontos[i]));
    return 0;
}
