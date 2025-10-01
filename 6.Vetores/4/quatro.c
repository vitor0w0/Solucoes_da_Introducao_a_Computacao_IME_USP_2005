#include <stdio.h>
//4 - Dados dois vetores x e y, ambos com n elementos, determinar o produto escalar desses vetores.
int main() {
    int n;
    scanf("%d", &n);
    int vet1[n], vet2[n];
    printf("Vetor 1: ");
    for (int i = 0; i < n; ++i) {
        scanf("%d", &vet1[i]);
    }
    int prod = 0;
    printf("Vetor 2: ");
    for (int i = 0; i < n; ++i) {
        scanf("%d", &vet2[i]);
        prod += vet1[i] * vet2[i];
    }
    printf("Produto : %d\n", prod);
    return 0;
}