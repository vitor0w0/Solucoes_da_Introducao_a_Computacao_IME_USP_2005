#include <stdio.h>
// 8 - Dado um inteiro não-negativo n, determinar n!
int fatorial(int);
int main(void) {
    int num;
    printf("Digite um numero: ");
    scanf("%d", &num);
    printf("%d\n", fatorial(num));
    return 0;
}
int fatorial(int i) {
    int mult=1;
    while (i > 1) {
        mult *= i;
        i--;
    }
    return mult;
}