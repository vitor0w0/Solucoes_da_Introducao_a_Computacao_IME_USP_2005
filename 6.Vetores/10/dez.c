#include "poli.h"
#include <stdio.h>
int main(void) {
    int n;
    printf("Grau: ");
    scanf("%d", &n);
    double vet[n+1];
    montar(vet, n);
    exibir(vet, n);
    printf("Quantos pontos k: ");
    int k;
    scanf("%d", &k);
    int pontos[k];
    for (int i = 0; i < k; i++)
        scanf("%d", &pontos[i]);

    for (int i = 0; i < k; i++)
        printf("Se x = %d: %0.lf\n", pontos[i], calcular(vet, n, pontos[i]));
    return 0;
}
