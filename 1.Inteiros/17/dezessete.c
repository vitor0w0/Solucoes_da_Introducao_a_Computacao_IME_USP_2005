#include<stdio.h>
/**
*   7 - Dado um número natural na base decimal, transformá-lo para a base binária.
    Exemplo: Dado 18 a saída deverá ser 10010.
 */
unsigned long decToBin(int);
int main() {
    int n = -1;
    while (n != 0) {
        printf("Digite n: ");
        scanf("%u", &n);
        printf("binario de %d: %lu\n", n, decToBin(n));
    }
    return 0;
}
unsigned long decToBin(int num) {
    int bin=0, pot=1;
    while (num > 0) {
        bin += num%2*pot;
        pot *= 10;
        num /= 2;
    }
    return bin;
}