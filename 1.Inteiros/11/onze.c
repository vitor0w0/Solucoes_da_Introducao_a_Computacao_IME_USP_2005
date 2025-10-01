#include <math.h>
#include<stdio.h>
// 11 - Dado um inteiro positivo n, verificar se n é primo.
int isprime(int);
int main() {
    int n=-1;
    puts("===digite 0 para sair do loop===");
    while (n != 0) {
        printf("Digite n:");
        scanf("%d", &n);
        printf("%d\n", isprime(n));
    }
    return 0;
}
int isprime(const int num) {
    if (num==2) return 1;
    if (num%2==0 || num <= 1) return 0;
    for (int i = 2; i*i < num; i++) {
        if (num%i==0) return 0;
    }
    return 1;
}