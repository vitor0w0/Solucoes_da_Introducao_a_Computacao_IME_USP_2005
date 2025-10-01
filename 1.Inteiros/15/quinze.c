#include <stdio.h>
/**
    15 - Dizemos que um número i é congruente módulo m a j se i % m = j % m.
    Exemplo: 35 é congruente módulo 4 a 39, pois 35 % 4 = 3 = 39 % 4.
    Dados inteiros positivos n, j e m, imprimir os n primeiros naturais congruentes a j módulo m.
 */
int main(void) {
    int n, j, m;
    printf("Digite n, j e m: ");
    scanf("%d %d %d", &n, &j, &m);
    const int mod = j%m;
    for (int i = 1; n >= 0; i++) {
        if (i % m == mod) {
            printf("%d ", i);
            n--;
        }
    }
    return 0;
}