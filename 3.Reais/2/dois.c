#include<stdio.h>
//Dado um natural n, determine o número harmônico H de n
int main() {
    int n;
    printf("Digite n: ");
    scanf("%d", &n);
    double soma = 1;
    for (int div = 2; div <= n; div++) {
        soma += 1.0/div;
    }
    printf("O numero %d-esimo e %.8lf\n", n, soma);
    return 0;
}
