#include <stdio.h>
/**  3.  Tentando descobrir se um dado era viciado, um dono de cassino honesto (ha! ha! ha! ha!) o lançou n vezes.
 *  Dados os n resultados dos lançamentos, determinar o número de ocorrências de cada face.
 */
int main() {
    int ocorr[6], n;
    scanf("%d", &n);
    for (int i = 0; i < 6; i++) {
        ocorr[i] = 0;
    }
    while (n-- > 0) {
        int num;
        scanf("%d", &num);
        ocorr[num-1]++;
    }
    puts("Ocorrencias: ");
    for (int i = 0; i < 6; ++i) {
        printf("face %d: %d ocorrencias\n", i+1, ocorr[i]);
    }
    return 0;
}
