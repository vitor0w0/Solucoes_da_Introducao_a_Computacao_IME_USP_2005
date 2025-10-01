#include <stdio.h>
//1- Dada uma seqüência de n números, imprimi-la na ordem inversa à da leitura.
int main() {
    int n;
    scanf("%d", &n);
    int vet[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &vet[i]);
    }
    for (int i = n-1; i > -1; i--) {
        printf("%d ", vet[i]);
    }
    return 0;
}