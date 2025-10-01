#include <stdio.h>
/**
*13 - (MAT 89) Dizemos que um inteiro positivo n é perfeito se for igual à soma de seus divisores positivos diferentes de n.
 Exemplo: 6 é perfeito, pois 1+2+3 = 6.
 Dado um inteiro positivo n, verificar se n é perfeito.
 */
int isperfect(int);
int main(void) {
    int num;
    scanf("%d", &num);
    char *res = isperfect(num)==1? "e perfeito" : "nao e perfeito";
    printf("%d %s\n", num, res);
    return 0;
}
int isperfect(const int num) {
    int soma=0;
    for (int i = 1; i < num; i++) {
        if (num%i==0) soma += i;
    }
    return soma==num? 1 : 0;
}