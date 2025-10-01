#include <math.h>
#include <stdio.h>
/**6 - Dados x real e n natural, calcular uma aproximação para cos x através dos n primeiros termos da seguinte série:
 *  cos x = 1 - x^2/2! + x^4/4! - x^6/6! + ... + (-1)^k k^2k/(2k)! + ...
 */
int main() {
    int n, flag = -1, j = 0;
    long double x, soma = 1.0;
    printf("Digite x, n: ");
    scanf("%Lf %d", &x, &n);
    for (int i = 1; i <= n; i++) {
        j += 2;
        for (int k = 1; k <= j; k++) {
            x *= x;
        }
        unsigned long long fat = 1;
        for (int k = 2; k <= j; k++) {
            fat *= k;
        }
        soma += x/fat*flag;
        flag *= -1;
    }
    printf("Calculadora: %.15f\n", cos((double)x));
    printf("Aproximacao: %.15Lf\n", soma);

    return 0;
}