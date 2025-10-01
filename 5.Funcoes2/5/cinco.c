#include <ctype.h>
#include <stdio.h>
#include <string.h>
/**
    5.  (a) Escreva uma função com o protótipo void converte (char ch, int *tipo, char *valor); que recebe um caractere ch
    e devolve em *tipo 0, se o caractere for um número inteiro, 1 se for uma letra (maiúscula ou minúscula) e 2 caso contrário;
    e além disso, no caso de ser uma letra, converte para maiúscula, senão devolve ch inalterado.

    (b) Escreva um programa que leia uma seqüência de n caracteres e imprima a seqüência convertida para maiúscula,
    eliminando os caracteresque não forem letras ou números.
 */
void converte(char, int*, char*);
int main() {
    int n;
    scanf("%d", &n);
    getchar();
    char str[n];
    fgets(str, n, stdin);
    for (int i = 0; str[i] != '\0'; i++) {
        int tipo;
        converte(str[i], &tipo, &str[i]);
        if (tipo == 1)
            printf("%c", str[i]);
    }
}
void converte(const char ch, int *tipo, char *valor) {
    if (ch >= '0' && ch <= '9') {
        *tipo = 0;
        return;
    }
    if (ch >= 'a' && ch <= 'z' || (ch >= 'A' && ch <= 'Z')){
        *valor = (char)toupper(ch);
        *tipo = 1;
        return;
    }
    *tipo = 2;
}