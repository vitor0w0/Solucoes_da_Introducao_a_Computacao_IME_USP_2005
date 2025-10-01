#include <math.h>
#include <stdbool.h>
#include <stdio.h>
/**
*   7.  (MAT 88) Dada uma seqüência de n números reais, determinar os números que compõem a seqüência e o número de vezes que cada um deles
*   ocorre na mesma.
    Exemplo: n = 8
    Seqüência: -1.7,  3.0,  0.0,  1.5,  0.0, -1.7,  2.3, -1,7
Saída: 8 -1.7 3 0 1.5 0 -1.7 2.3 -1.7
    -1.7 ocorre 3 vezes
    3.0 ocorre 1 vez
    0.0 ocorre 2 vezes
    1.5 ocorre 1 vez
    2.3 ocorre 1 vez
*/
int main() {
    int n;
    scanf("%d", &n);
    float nums[n];
    for (int i = 0; i < n; ++i) {
        scanf("%f", nums+i);
    }
    for (int i = 0; i < n; ++i) {
        int cont = 1;
        for (int j = i+1; j < n; j++) {
            if (nums[i] == nums[j]) {
                cont++;
                nums[j] = NAN;
            }
        }
        if (!isnan(nums[i]))
            printf("%.2f ocorre %d vezes\n", nums[i], cont);
    }
    return 0;
}