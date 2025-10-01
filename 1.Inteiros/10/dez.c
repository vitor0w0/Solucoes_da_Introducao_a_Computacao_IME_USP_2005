#include <stdio.h>

/**
*   10 - Dizemos que um número natural é triangular se ele é produto de três números naturais consecutivos.
    Exemplo: 120 é triangular, pois 4.5.6 = 120.
    Dado um inteiro não-negativo n, verificar se n é triangular.
 */
int triangular(int);
int main(void) {
    int n;
    printf("Digite um numero: ");
    scanf("%d", &n);
    char *res = triangular(n) == 1 ? "triangular" : "nao e triangular";
    printf("%s\n", res);
    return 0;
}
int triangular(const int n) {
    for (int i = 0; i < n; i++) {
        if (i*(i+1)*(i+2)==n) {
            printf("%d.%d.%d=%d\n", i, i+1, i+2, n);
            return 1;
        }
    }
    return 0;
}