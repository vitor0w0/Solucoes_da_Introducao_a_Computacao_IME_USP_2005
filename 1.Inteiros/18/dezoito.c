#include <stdio.h>
void swap(int*, int*);
int main() {
    printf("Escreva a, b, c: ");
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    //b > a? b > c? swap(&a, &b) : swap(&a, &c) : c > a? swap(&a,&c) : 0;
    if (b > a) {
        if (b > c) {
            swap(&a, &b);
        } else {
            swap(&a, &c);
        }
    } else {
        if (c > a) {
            swap(&a, &c);
        }
    }
    a*a==b*b+c*c? puts("Triangulo retangulo") : puts("Nao forma um triangulo retangulo");
    return 0;
}
void swap(int *x, int *y) {
    const int temp = *x;
    *x = *y;
    *y = temp;
}