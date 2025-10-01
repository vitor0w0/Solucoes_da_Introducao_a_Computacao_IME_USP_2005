#include <stdio.h>
#define false 0
#define true 1
/**
    São dados dois números inteiros positivos p e q, sendo que o número de dígitos de p é menor ou igual ao número de dígitos de q.
    Verificar se p é um subnúmero de q. Exemplos:
    p = 23, q = 57238, p é subnúmero de q.
    p = 23, q = 258347, p não é subnúmero de q.
*/
int subnumero(int, int);
int main() { // digitos de p <= digitos de q
    int p, q;
    printf("Digite p e q: ");
    scanf("%d %d", &p, &q);
    printf("%d", subnumero(p, q));
    return 0;
}
int subnumero(int p, int q) {
    while (q > 0 && p > 0) {
        if (p%10==q%10) {
            p /= 10;
        }
        q /= 10;
    }
    return p <= 0? true : false;
}