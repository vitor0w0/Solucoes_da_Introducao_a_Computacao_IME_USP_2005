#include <stdio.h>
#include <stdbool.h>
/**
 *  2 -Dado um número inteiro positivo n, determinar todos os inteiros entre 1 e n que são comprimento da hipotenusa de um
 *  triângulo retângulo com catetos inteiros.
*/
int main() {
    int n;
    printf("Digite n: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i) {
        bool hipotenusa = false;
        for (int cateto = 1; cateto < n && !hipotenusa; cateto++) {
            for (int cateto2 = 1; cateto2 < n; cateto2++) {
                if (cateto*cateto + cateto2*cateto2 == i*i) {
                    printf("cateto 1 = %d, cateto 2 = %d, hipotenusa = %d\n", cateto, cateto2, i);
                    hipotenusa = true;
                }
            }
        }
    }
    return 0;
}