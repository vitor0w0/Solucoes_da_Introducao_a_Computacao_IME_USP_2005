#include <stdio.h>
/**
* Dizemos que um número natural n é palíndromo (3) se
    o 1º algarismo de n é igual ao seu último algarismo,
    o 2º algarismo de n é igual ao penúltimo algarismo,
    e assim sucessivamente. Exemplos:
        567765 e 32423 são palíndromos.
        567675 não é palíndromo.
    Dado um número natural n > 10 , verificar se n é palíndrome.
 */
int ispalindrome(int);
int main() {
    int n = 10;
    scanf("%d", &n);
    ispalindrome(n)? printf("%d e palindromo", n) : printf("%d nao e palindromo", n);
    return 0;
}
int ispalindrome(int num) {
    int soma = 0;
    const int x = num;
    while (num > 0) {
        soma *= 10;
        soma += num%10;
        num /= 10;
    }
    return soma==x;
}