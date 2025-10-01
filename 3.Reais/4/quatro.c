#include <float.h>
#include <stdio.h>
/**
*   4 - (GEO 84) Considere o conjunto H = H1 U H2 de pontos reais, onde
*   H1 = {(x,y) | x <= 0, y <= 0, y + x*x + 2*x - 3 <= 0}
*   H2 = {(x, y) | x >= 0, y + x*x - 2*x - 3 <= 0}
*
    Faça um programa que lê uma seqüência de n pontos reais (x,y) e verifica se cada ponto pertence ou não ao conjunto H.
    O programa deve também contar o número de pontos da seqüência que pertencem a H.
*/
int main() {
    int n;
    printf("Digite n: ");
    scanf("%d", &n);
    int cont = 0;
    while (n-- > 0) {
        double x, y;
        scanf("%lf %lf", &x, &y);
        if (y <= 0 && (y + x*x + 2*x - 3 <= 0 || y + x*x - 2*x - 3 <= 0)) {
            printf("(%.3lf, %.3lf) pertencem ao conjunto H\n", x, y);
            cont++;
        }
        else {
            printf("(%.3lf, %.3lf) nao pertencem ao conjunto H\n", x, y);
            cont++;
        }
    }
    printf("%d", cont);
    return 0;
}