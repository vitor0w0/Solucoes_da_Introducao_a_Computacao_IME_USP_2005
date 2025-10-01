#include<stdio.h>
/**
*   Sabe-se que um número da forma n^3 é igual a soma de n ímpares consecutivos.
    Exemplo: 1^3= 1, 2^3= 3+5, 3^3= 7+9+11,  4^3= 13+15+17+19,...
    Dado m, determine os ímpares consecutivos cuja soma é igual a n^3 para n assumindo valores de 1 a m.
 */
int main() {
    int m;
    printf("Digite m: ");
    scanf("%d", &m);
    int i = 1;
    for (int n = 1; n <= m; n++) {
        printf("n = %d; n^3 = %d; Soma de: ", n, n*n*n);
        for (int j = 1; j <= n; j++) {
            printf("%d ", i);
            i += 2;
        }
        putchar('\n');
    }
    return 0;
}
