#include <stdio.h>
/**
 *  9 - Dadas n triplas compostas por um símbolo de operação (+, -, * ou /) e dois números reais,
 *  calcule o resultado ao efetuar a operação indicada para os dois números (Sugestão: use switch).
*/
int main() {
    int n;
    printf("Digite n: ");
    scanf("%d", &n);
    while (n-- > 0) {
        double x, y;
        char op;
        printf("Digite uma operacao simples <numero> <operador> <numero>: ");
        scanf("%lf %c %lf", &x, &op, &y);
        switch (op) {
            case '+':
                printf("%.2lf + %.2lf = %.2lf\n", x, y, x+y);
                break;
            case '-':
                printf("%.2lf - %.2lf = %.2lf\n", x, y, x-y);
                break;
            case '*':
                printf("%.2lf * %.2lf = %.2lf\n", x, y, x*y);
                break;
            case '/':
                printf("%.2lf / %.2lf = %.2lf\n", x, y, x/y);
                break;
            default:
                puts("Algo deu errado. Os operadores sao *, /, +, e -");
                n++;
                break;
        }
    }
    return 0;
}