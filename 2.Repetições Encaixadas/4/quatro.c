#include<stdio.h>
#define false 0
#define true 1
//4 - Dados n números inteiros positivos, calcular a soma dos que são primos.
int primo(int);
int main() {
    int n;
    printf("Digite n: ");
    scanf("%d", &n);
    int soma = 0;
    while (n-- > 0) {
        int num;
        scanf("%d", &num);
        if (primo(num)) {
            soma += num;
        }
    }
    printf("soma dos primos: %d", soma);
    return 0;
}
int primo(const int num) {
    if (num==2) return true;
    if (num%2==0 || num==1) return false;
    for (int i = 2; i*i <= num; i++) {
        if (num%i==0) {
            return false;
        }
    }
    return true;
}