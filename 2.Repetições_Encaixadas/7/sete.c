#include <stdio.h>
//7 - Dados um inteiro positivo n e uma seqüência de n inteiros positivos, determinar o máximo divisor comum a todos eles.
int mdc(int, int);
int main() {
    int n, maxdiv;
    printf("Digite um numero: ");
    scanf("%d %d", &n, &maxdiv);
    n--;
    while (n-- > 0) {
        int num;
        scanf("%d", &num);
        maxdiv = mdc(maxdiv, num);
        num = maxdiv;
    }
    printf("%d", maxdiv);
    return 0;
}
int mdc(const int a, const int b) {
    if (b==0)
        return a;
    return mdc(b, a%b);
}