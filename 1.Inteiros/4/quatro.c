#include <stdio.h>
// 4 - Dados um inteiro x e um inteiro não negativo n, calcular x^2
int potencia(int, int);
int main(void) {
    int num, exponente;
    printf("Digite um numero: ");
    scanf("%d", &num);
    printf("Digite o exponente: ");
    scanf("%d", &exponente);
    num = potencia(num, exponente);
    printf("%d\n", num);
    return 0;
}
int potencia(const int num, int exponente) {
    if (exponente==0) return 1;
    int res = num;
    while (exponente > 1) {
        res *= num;
        exponente--;
    }
    return res;
}