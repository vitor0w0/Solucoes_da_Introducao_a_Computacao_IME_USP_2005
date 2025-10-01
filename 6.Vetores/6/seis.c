#include <stdio.h>
#include <string.h>
/**
*   6 - (COMP 89) Dados dois strings (um contendo uma frase e outro contendo uma palavra),
*   determine o número de vezes que a palavra ocorre na frase.
    Exemplo:
    Para a palavra ANA e a frase:
    *ANA* E MARI*ANA* GOSTAM DE B*AN*A*NA*
    Temos que a palavra ocorre 4 vezes na frase.
 */
int main() {
    char plv[50], frase[50];
    printf("Digite frase: ");
    fgets(frase, 50, stdin);
    printf("Digite palavra: ");
    scanf("%s", plv);
    const int flen = (int)strlen(frase), plen = (int)strlen(plv);
    int cont = 0;
    for (int i = 0, j = 0; i < flen; ++i) {
        for (int k = i; frase[k] == plv[j]; k++) {
            j++;
        }
        if (j == plen)
            cont++;
        j = 0;
    }
    printf("Temos que a palavra %s ocorre %d vezes na frase\n", plv, cont);
    return 0;
}