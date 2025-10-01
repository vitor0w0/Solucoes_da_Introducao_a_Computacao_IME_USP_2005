#include<stdio.h>
/**
* 9 - Dados n e dois números inteiros positivos i e j diferentes de 0, imprimir em ordem crescente os n primeiros naturais
*que são múltiplos de i ou de j e ou de ambos.
  Exemplo: Para n = 6 , i = 2 e j = 3 a saída deverá ser : 0,2,3,4,6,8
*/
int main() {
    int n, i, j;
    printf("Digite n:");
    scanf("%d", &n);
    printf("Digite dois numeros: ");
    scanf("%d %d", &i, &j);
    int cont=0;
    for (int k = 0; cont < n; k++) {
        if (k%i==0 || k%j==0) {
            printf("%d ", k);
            cont++;
        }
    }
    putchar('\n');
    return 0;
}