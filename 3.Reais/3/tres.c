#include <stdio.h>
/**
    *3.  Os pontos (x,y) que pertencem à figura H (nao abaixo) são tais que x >= 0, x >= 0 e x2 + y2 <= 1.
    Dados n pontos reais (x,y), verifique se cada ponto pertence ou não a H.
*/
int main() {
    int n;
    printf("Digite n: ");
    scanf("%d", &n);
    while (n-- > 0) {
        double x, y;
        scanf("%lf %lf", &x, &y);
        if (x >= 0 && y >= 0 && x*x + y*y <= 1)
            printf("(%lf, %lf) pertence a figura\n", x, y);
        else
            printf("(%lf, %lf) nao pertence a figura\n", x, y);
    }
    return 0;
}