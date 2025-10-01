#include <stdio.h>
/**
    2 - (a) Construa uma função encaixa que dados dois inteiros positivos a e b verifica se b corresponde aos últimos dígitos de a.
    Ex.:
    a    	 b
    567890 	890	    => encaixa
    1243	1243	=> encaixa
    2457	245 	=> não encaixa
    457	    2457	=> não encaixa

    (b) Usando a função do item anterior, faça um programa que lê dois inteiros positivos a e b e verifica se o menor deles é segmento do outro.
    Exemplo:
    a	    b
    567890	678	=> b é segmento de a
    1243	2212435	=> a é segmento de b
    235	    236	=> um não é segmento do outro
*/
int encaixa(int, int);
int main() {
    int a, b, trocou = 0;
    printf("Digite a e b: ");
    scanf("%d %d", &a, &b);
    if (b > a) {
        const int temp = a;
        a = b;
        b = temp;
        trocou = 1;
    }
    while (a > 0) {
        if (a%10 == b%10) {
            encaixa(a, b)? trocou? puts("a e segmento de b") : puts("b e segmento de a") : puts("um nao e segmento do outro");
            return 0;
        }
        a /= 10;
    }
    puts("um nao e segmento do outro");
    return 0;
}
int encaixa(int a, int b) {
    while (b > 0) {
        if (a%10 != b%10)
            return 0;
        a /= 10;
        b /= 10;
    }
    return 1;
}