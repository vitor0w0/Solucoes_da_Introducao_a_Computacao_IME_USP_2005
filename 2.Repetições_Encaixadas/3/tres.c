#include <stdio.h>
#include <stdbool.h>
/**
 * 3 - Dados dois naturais m e n determinar, entre todos os pares de números naturais (x,y) tais que x <= m e y <= n,
 * um par para o qual o valor da expressão xy - x^2 + y seja máximo e calcular também esse máximo.
 */
int main() {
    int m, n;
    printf("Digite m e n: ");
    scanf("%d %d", &m, &n);
    int result = 0, x=0, y=0;
    int X = x, Y = y;
    for (x = 1; x <= m; x++) {
        for (y = 1; y <= n; y++) {
            if (x*y - x*x + y > result) {
                result = x*y - x*x + y;
                X = x;
                Y = y;
            }
        }
    }
    printf("Par maximo = (%d, %d) = %d\n", X, Y, result);
    return 0;
}