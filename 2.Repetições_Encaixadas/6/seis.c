#include <stdio.h>
#define false 0
#define true 1
//6 - Dado um número inteiro positivo, determine a sua decomposição em fatores primos calculando também a multiplicidade de cada fator.
int main() {
    int num;
    printf("Digite um numero: ");
    scanf("%d", &num);
    for (int i = 2; num > 1; i++) {
        int cont = 0;
        while (num%i==0){
            printf("%d/", num);
            num /= i;
            printf("%d = %d, ", i, num);
            cont += 1;
        }
        if (cont > 0) {
            printf(" -> Multiplicidade de %d = %d\n", i, cont);
        }
    }
    return 0;
}